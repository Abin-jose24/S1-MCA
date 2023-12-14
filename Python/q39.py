
def sum(seq):
 """find sum of elents using recursion"""
 if(len(seq)==1):
     return seq[0]
 else:
     return seq[0]+sum(seq[1:])
l=list(map(int,input("enter list of numbers").split()))
print("sum of elements of list",l,"=",sum(l))



"""without recursion"""
def sum():
    sum=0
    l=list(map(int,input("enter list of numbers").split()))
    for i in l:
         sum+=i
    return sum
print("Sum=",sum())
