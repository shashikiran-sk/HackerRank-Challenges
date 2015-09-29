#include <iostream>
using namespace std;
#define n 5
int find(bool mat[n][n])
{
	int i,j=0,k=0;
	for(i=0;i<n;i++)
	{
		k=0;j=0;
		while(j<n)
		{
			if(i!=j && mat[i][j]==0 && mat[j][i]==1)
				k++;
			j++;
		}
		if(k==n-1)
			return i;
	}
	return -1;
}
int main()
{
    bool mat[n][n] = {{0, 1, 1, 0, 1},
                         {0, 0, 0, 0, 0},
                         {1, 1, 1, 0, 0},
                         {1, 1, 1, 1, 0},
                         {1, 1, 1, 1, 1}};
    cout<<find(mat)<<endl;
 
    return 0;
}
/*Given a square boolean matrix mat[n][n], 
find k such that all elements in k’th row are 0 and all elements in k’th column are 1. 
The value of mat[k][k] can be anything (either 0 or 1). If no such k exists, return -1.*/
