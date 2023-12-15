t=0
x=1
flag=0
while(x!=0):
    a=(input("Enter The Name Of Student:"))
    b=int(input("Enter Rollno:"))
    print("Enter Mark Of 5 subjects: ")
    y=1
    while(y!=6):
        c=int(input(""))
        if(c<35):
           flag=1 
        t=c+t
        y=y+1
    print("Total=",t)
    if(t<150 or flag==1):
        print("Failed")
    elif(t>450):
        print("You Have Secured A+")
    elif(t>400):
        print("You Have Secured A")
    elif(t>350):
        print("You Have Secured B+")
    elif(t>300):
        print("You Have Secured B")
    elif(t>250):
        print("You Have Secured B")
    elif(t>200):
        print("You Have Secured C")
    elif(t>150):
        print("You Have Secured D")
    x=int(input("press 1 to continue "))
