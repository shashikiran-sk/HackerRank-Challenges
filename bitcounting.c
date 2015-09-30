#include <stdio.h>

int main()
{
    int i,j,k,N,K,T,key,temp,a[10000],count[10000]={0},sum=0;
    scanf("%d",&T);
    while(T>0)
    {
    	scanf("%d %d",&N,&K);
    	for(i=0;i<N;i++)
    		scanf("%d",&a[i]);
    	//count[10000]={0};
    	for(i=0;i<N;i++)
    	{
    		k=1;
    		count[i]=0;
    		while(k<=a[i])
    		{
    			if(a[i]&k)
    				count[i]++;
    			k=k<<1;
    		}   
    	}
     	T--;
     	for (i = 1; i < N; i++)
   		{
      	 	key = count[i];
       		j = i-1;
       		while (j >= 0 && count[j] > key)
       		{
           		count[j+1] = count[j];
           		j = j-1;
       		}
       		count[j+1] = key;
       	}
    	
    	sum=0;
    	/*for(i=0;i<N;i++)
    		printf("%d\t",count[i]);*/
    	i=N-1;
    	while(K--)
    		sum+=count[i--];
    	printf("%d\n",sum);
    }
}
/*Monk loves cakes! He visits the Binary Bakery to buy some of his favorite cheesecakes. 
The owner of the bakery, Bob, is a clever man. He does not want Monk to finish all his cheesecakes. Hence, he plays a game.
The Monk is given N numbers and has to select K of these numbers. For each number that Monk chooses, he will get as many cheesecakes as the number of 1's in the Binary representation of the number i.e. the number of bits that are set.
Help Monk find the maximum number of cakes that he can have.

Input:
The first line of input contains T. T test cases follow.
First line of each test cases contains 2 space-separated integers N and K.
The next line contains N space-separated integers.

Output:
For each test cases, print the answer in a new line.

Sample Input(Plaintext Link)
 1
4 2
6 1 2 0
Sample Output(Plaintext Link)
 3
*/