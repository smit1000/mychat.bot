# import streamlit as st
# st.title("hellow ")
# st.header("my first streamlit")
# name=st.text_input("Enter your name")
# st.write(name)
# # st.button("click me")
# if st.button("click me"):
#     st.write("This button was pushed")

# age=st.number_input("Enter the umar")
# age=st.slider("Enter your age",1,100)
# courses=st.selectbox("choose your courses",["jamalgot","vimal",])
# agree=st.checkbox("I agree")
# gender=st.radio("choose your gender",["male","female","transgender"])
# question=st.text_area("WTF")
# upload=st.file_uploader("upload your file",type=("txt","pdf"))
# sidebar=st.sidebar.title("sidebar")
# st.sidebar.selectbox("choose your course",
#                         ["java","pythos","H2ymal"])
# col1,col2=st.columns(2)
# with col1:
#     st.header("input")
# with col2:
#     st.header("output")   

# prompt=st.chat_input("what's your problem..Ahh?")    
# # if prompt:
# #     with st.chat_message("Assistant"):
# #         st.write("obviously Window")
# if prompt:
#     response = ollama.chat(
#         model="llama3",
#         messages=[{"role": "user", "content": prompt}]
#     )
#     st.write(response["message"]["content"])
import streamlit as st
import ollama

st.title("Chat with Ollama")

prompt = st.text_input("Ask something:")

if prompt:
    response = ollama.chat(
        model="gemma",
        messages=[{"role": "user", "content": prompt}]
    )
    st.write(response["message"]["content"])