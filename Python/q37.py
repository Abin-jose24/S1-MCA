def even(l):
    for item in l:
         if(item==237):break
         elif not item%2:print(item)
n=input("Enter list of numbers:")
n=list(map(int,n.split()))
even(n)
