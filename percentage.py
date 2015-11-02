n=int(input())
list=[{'name':None,'P':0,'C':0,'M':0} for x in range(n)]
for i in range(n):
    l=input().split()
    list[i]['name']=l[0]
    list[i]['P']=float(l[1])
    list[i]['C']=float(l[2])
    list[i]['M']=float(l[3])
name=input()
for i in range(n):
    if list[i]['name']==name:
        print("%.2f"%((list[i]['P']+list[i]['C']+list[i]['M'])/3))





'''
d={}
for i in range(int(raw_input())):
    line=raw_input().split()
    d[line[0]]=sum(map(float,line[1:]))/3

print '%.2f' % d[raw_input()]
'''
