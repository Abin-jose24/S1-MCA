import math
a=input("Enter a list of numbers:")
a=list(map(int,a.split()))
small=min(a)
n=[]
for i in a:
    if(i>small):
        n.append(i)
print("second smallest number=",min(n))
