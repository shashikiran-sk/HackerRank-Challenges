#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	long int N,dig,T,i,count,num;
    	cin>>T;
    	for(i=0;i<T;i++)
    	{
    		cin>>N;
        	count=0;
        	num=N;
    		while(num)
        	{
        		dig=num%10;
        		if(dig!=0 && N%dig==0)
            		{
            			count++;
               		}
        		num=num/10;
        	}
        	cout<<count<<endl;
    	}
    	return 0;
}
