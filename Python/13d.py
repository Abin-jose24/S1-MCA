l1=input("Enter a list of numbers:")
l1=list(map(int,l1.split(',')))
r=[x for x in l1 if (x%2)]
print(r)
