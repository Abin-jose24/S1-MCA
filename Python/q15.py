a=input("Enter a list of Numbers Seperated By commas:")
a=list(map(int,a.split(',')))
e=[even for even in a if not even%2]
print(e)
