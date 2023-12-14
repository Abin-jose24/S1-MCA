""" reverse names"""

def rev_names(name):
    for word in name[::-1]:
         print(word,end=' ')
n=input("Enter your name:").split()
rev_names(n)
