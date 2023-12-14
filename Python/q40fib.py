"""fibonacci series"""
def fibo(n):
 a,b=0,1
 for i in range(n):
      a,b=b,a+b
 return a
n=int(input("Enter nos:"))
print(n,"th fibonacci is ",(n,fibo(n)))
