import streamlit as st
import ollama
import numpy as np

st.title("Welcome To the Chat")

with open(r"D:\C++ Programming\.vscode\streamlit\my.txt", "r") as file:
    knowledge = file.read()

chunks = knowledge.split("\n\n")

# Embed all chunks once
response = ollama.embed(model="nomic-embed-text", input=chunks)
chunk_vectors = response["embeddings"]

question = st.chat_input("Ask something")

if question:
    with st.chat_message("user"):
        st.write(question)

    q_response = ollama.embed(model="nomic-embed-text", input=question)
    question_vector = q_response["embeddings"][0]

    scores = []
    for vec in chunk_vectors:
        similarity = np.dot(question_vector, vec) / (
            np.linalg.norm(question_vector) * np.linalg.norm(vec)
        )
        scores.append(similarity)

    best_index = np.argmax(scores)
    best_chunk = chunks[best_index]

    # Build the prompt (fixed: 3 quotes, not 4, and moved inside the if block)
    prompt = f"""
Answer the question using only the content below.

Context:
{best_chunk}

Question:
{question}
"""

    # Send it to the chat model and show
    response=ollama.chat(
        model="llama3.2",
        messages=[
            {
                "role":"user",
                "content":prompt
            }
        ]
    )
    answer = response["message"]["content"]

    #display answere
    with st.chat_message("assistant"):
        st.write(answer)