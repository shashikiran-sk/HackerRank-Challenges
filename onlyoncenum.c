#include<stdio.h>
int main()
{
	int i,num=0,a[9]={1,1,2,2,3,3,4,4,7};
	for(i=0;i<9;i++)
		num=num^a[i];
	printf("%d",num);
}