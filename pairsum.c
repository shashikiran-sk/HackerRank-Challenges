#include<stdio.h>
#include<math.h>
int main()
{
	int arr[1000],result[2],l,i,r,n,sum,diff=100000;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&sum);
	r=n-1;
	l=0;
	while(l<r)
	{
		if(abs(arr[l]+arr[r]-sum)<diff)
		{
			diff=abs(arr[l]+arr[r]-sum);
			result[0]=arr[l];
			result[1]=arr[r];
		}
		else if((arr[l]+arr[r])<sum)
			l++;
		else
			r--;
	}
	printf("Output=%d : %d",result[0],result[1]);
	return 0;
}
		
			
	
