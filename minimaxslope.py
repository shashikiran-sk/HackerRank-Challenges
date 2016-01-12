a=int(input())
b=int(input())
count=0
for k in range(a-1,b+1):
	x=str(k)
	l=[int(x[i]) for i in range(len(x))]
	for i in range(1,len(l)-1):
	#print(l[i])
		if ((l[i]>l[i-1] and l[i]>l[i+1])or(l[i]<l[i-1] and l[i]<l[i+1])):
			count=count+1
print(count)
