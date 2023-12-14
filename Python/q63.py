try:
    n=int(input("Enter an Number b/w 90 & 120:"))
    if(n not in range(91,120)):
        raise ValueError
except ValueError :
        print("Abnormal Condition!Value not between 90 &120")
else:
        print("Value=",n)
