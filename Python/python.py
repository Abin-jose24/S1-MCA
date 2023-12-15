a= int(input("enter 1st num  :"))
b= int(input("enter 2nd num  :"))

print("1.Add")
print("2.Subract")
print("3.Multiply")
print("4.Divide")

c=int(input("Enter the choice :"))

if(c==1):
    print(a+b)
elif(c==2):
    print(a-b)
elif(c==3):
    print(a*b)
elif(c==4):
    print(a/b)
else:
    print("Invalid Input")    

