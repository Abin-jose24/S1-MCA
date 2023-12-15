for row in  range(7):
    for col in range(5):
        if(col==1):
            print('*',end='')
        if(col==3 and row in {1,2,4,5}):
            print('*',end='')
        if(col==2 and row in {0,3,6}):
            print('*',end=' ')
        else:
            print(' ',end=' ')
    print()
