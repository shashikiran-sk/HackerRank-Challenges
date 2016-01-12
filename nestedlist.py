l=[]
a=[]
n=int(input())
for i in range(n):
    a=[]
    a.append((input()))
    a.append(float(input()))
    l.append(a)
l.sort()
a=[]
for i in range(n):
    a.append(l[i][1])
for i in range(a.count(min(a))):
    a.pop(a.index(min(a)))
print(a)
m=float(min(a))
a=[]
for i in range(n):
    if l[i][1]==m:
        a.append(l[i][0])
a.sort()
m=len(a)
for i in range(m):
    print(a[i],end='\n')

'''There is a classroom of 'n' students and you are given their names and marks in physics.
Store them in a nested list and print the name of each student who got the second lowest marks in physics.

NOTE: If there are more than one student getting same marks,
make sure you print the names of all students in alphabetical order,
in different lines.'''
