'''import math
N=int(input())
l=[]
for j in range(N):
    del l[:]
    price=int(input())
    n=price
    while n%2==0:
        l.append(2)
        n=n/2
    i=3
    while i<=math.sqrt(n):
        while n%i==0:
            l.append(i)
            n=n/i
        i=i+2
    if n>2:
        l.append(n)
    print(price-min(l),"\n")
    #print(l)
'''
T,n=0,0
L=[int(i) for i in range(2,10000)]
for i in range(2,10000):
    if L[i]==i:
        j=i*i
        print("i")
        while j<=100:
            if L[j]==j:
                L[j]=i
            j=j+i
            print("j")
print(L)
'''T=int(input())
while T:
    n=int(input())
    print(n-L[n])
    T=T-1'''
    
