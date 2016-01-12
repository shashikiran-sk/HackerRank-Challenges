s=str(input())
l=s.split(' ')
for i in range(len(l)):
    l[i]=l[i].capitalize()
s=' '.join(l)
print(s)