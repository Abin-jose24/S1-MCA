s=input("Enter a string:")
a=s[0]
s=s[0]+s[1:].replace(a,'&')
print(s)
