#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
	int a[1000],i,j,N,pos=0,neg=0,zero=0;
	float p,n,z;
	cin>>N;
	for(i=0;i<N;i++)
		cin>>a[i];
	for(i=0;i<N;i++)
	{
		if(a[i]==0)
			zero++;
		else if(a[i]<0)
			neg++;
		else
			pos++;
	}
	p=(float)pos/N;
	n=(float)neg/N;
	z=(float)zero/N;
	printf("%.3f\n",p);
	printf("%.3f\n",n);
	printf("%.3f\n",z);
    return 0;
}

