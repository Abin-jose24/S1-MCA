def count_string(s):
    count=0
    for item in s.split():
         if len(item)>1 and item[0]==item[-1]:
             count+=1
    return count
s=input("Enter a string:")
print(count_string(s))
