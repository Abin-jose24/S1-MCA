try:
    n=int(input("Enter a Positive integer:"))
    assert n>0,"Entered value is -ve"
except AssertionError as ae:
    print(ae)
else:
    print("Number=",n)
