s=input("Enter a list of numbers seperated by commas:")
s=list(map(int,s.split(',')))
l=[item for item in s if item>0]
print(l)
