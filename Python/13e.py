year=int(input("Enter a year"))
leap=[x for x in range(2023,year)if not(x%4) ]
print(leap)
