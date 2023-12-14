s=input("Enter a string:").split()
words={}
for w in s:
    words[w]=words.get(w,0)+1
print(words)
