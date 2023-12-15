s=list(input("Enter Names Seperated by commas:").split(','))
s=[item.split() for item in s]
print(s[0][0])
