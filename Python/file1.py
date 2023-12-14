import os
op=open("samplefile2.txt","wr")
op.writelines("apple\n orange \n grapes\n banana\n sugar")
ls=op.readlines()
op.close()
n=int(input("enter n for identifying line"))
ls.pop(n-1)
print(ls)
op=open("openfile.txt","w")
op.writelines(ls)


op.close()
