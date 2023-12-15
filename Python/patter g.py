for row in range(7):
    for col in range(8):
        if(row in {0,6} and col not in{0,5,6,7}):
            print('*',end=' ')
        elif(col==0 and row not in{0,6}):
            print('*',end=' ')
        elif(col in{4,7} and row in {3,4,5,6}):
            print('*',end=' ')
        elif(row==3 and col in {2,3,4,5,6,7}):
            print('*',end=' ')
        else:
            print(' ',end=' ')
    print()
    
