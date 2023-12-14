s=input("Enter words")
l=list(filter(lambda x:len(x)<5,s.split()))
print(l)
