#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string.h>
#include <algorithm>
using namespace std;


int main() {
    	char S[10000];
    	int N,i=1,j,T;
    	cin>>T;
    	for(int k=0;k<T;k++)
    	{
    		cin>>S;
    		N=strlen(S);
    		j=N-2;
    		while((abs(S[i]-S[i-1])==abs(S[j]-S[j+1]))&&(i!=N-1))
    		{
    			i++;
    			j--;
    		}
    		if(i==N-1)
    			cout<<"Funny"<<endl;
    		else
    			cout<<"Not Funny"<<endl;
    	}
    	return 0;
}
