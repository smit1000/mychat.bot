import streamlit as st
import ollama
st.title("Jai Mahrashtra Kara Kasta!!!")
with open(r"D:\C++ Programming\.vscode\Python\my.txt", "r") as file:
    knowledge = file.read()

chunks = knowledge.split("\n\n")

response = ollama.embed(model="nomic-embed-text", input=chunks)
vectors = response["embeddings"]

print(f"Got {len(vectors)} embeddings")
print(vectors[0])