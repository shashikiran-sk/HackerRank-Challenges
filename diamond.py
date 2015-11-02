n=int(input())
m=int(input())
diamond=0
mat=[[0 for x in range(m)] for x in range(n)]
for i in range(0,n):
    for j in range(0,m):
        mat[i][j]=input()
for i in range(0,n):
    for j in range(0,m):
        print(mat[i][j])
        print(" ")
    print("\n")
for i in range(1,n):
    for j in range(1,m):
        if mat[i-1][j-1]=='/' and mat[i-1][j]=="\\" and mat[i][j-1]=="\\" and mat[i][j]=="/":
            diamond=diamond+1
print(diamond)
