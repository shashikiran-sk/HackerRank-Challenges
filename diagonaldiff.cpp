#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int a[100][100],j,N,d1=0,d2=0;
   	cin>>N;
        for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			cin>>a[i][j];
	for(int i=0;i<N;i++)
		d1=d1+a[i][i];
    	for(int i=N-1,j=0;i>=0;i--,j++)
        	d2=d2+a[i][j];
    	cout<<abs(d1-d2);
    	return 0;
}
