l=input("Enter a list of words seperated by commas:").split(',')
n=int(input("Enter The Limit:"))
l2=[]
for item in l:
    if len(item)>n:
        l2.append(item)
print(l2)
