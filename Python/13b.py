s=input("Enter a list of numbers seperated by commas:")
s=list(map(int,s.split(',')))
e=[x**2 for x in s]
print(e)
