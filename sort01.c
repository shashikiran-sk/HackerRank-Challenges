#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf("Enter the number of elements\t");
	scanf("%d",&n);
	printf("Enter the array elements 0 & 1\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	i=0;j=i+1;
	while(j<n)
	{
		if(a[i]==0)
		{
			if(a[j]==1)
			{
				temp=a[i];
				a[i++]=a[j];
				a[j]=temp;
			}
			j++;
		}
		else
		{
			i++;
			j++;
		}
	}
	printf("Thehe array elements 0 & 1 after sorting---\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	return 0;
}

