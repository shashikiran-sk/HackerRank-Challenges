str1=input()
substr=input()
count=0
for i in range(len(str1)-len(substr)+1):
    for j in range(len(substr)):
        if str1[j+i]!=substr[j]:
            break;
    if j==len(substr)-1:
        count=count+1;
print(count)
