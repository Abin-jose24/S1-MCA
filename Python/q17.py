s=input("Enters a List Of numbers:")
s=list(map(int,s.split()))
l=[]
for item in s:
    if item not in l:
        l.append(item)
print(l)
