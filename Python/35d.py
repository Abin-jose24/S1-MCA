n=input("Enter a list of numbers seperated by space")
n=list(map(int,n.split()))
l2=list(map(lambda x:(x+.1*x) if x>1000 else (x+0.05*x),n))
print(l2)
