string=input("Enter a string:")
s=string[:1:]
string=s+string[1::].replace(s,'&')
print("New string:",string)
