f=open("test4.txt","w+")
f.writelines("apple\norange\ngrapes\n")
f.close()

f=open("test4.txt","r+")
print('output is\n')
print(f.read())
f.close()
