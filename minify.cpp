#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void fun(int a[],int size)
{
    int temp,i=0,j=size-1,f=0,k;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        f=f+1;
        if(f%2==1)
            i++;
        else
            j--;
     }
        k=floor(size/2);
        for(i=k,j=k+1;i<size-1;i++)
            a[i]=a[j++];
    
}
void f1(int *a,int N,int K)
{
    int k=0;
    while(k<K)
    {
        k++;
        fun(a,N--);
    }
}
int main()
{
    int N,K,*a,T,t=0;
     //scanf("%d",&T);
    cin>>T;
    while(t++<T)
    {
    cin>>N>>K;
    a=(int *)malloc(N*sizeof(int));
    for(int i=0;i<N;i++)
        cin>>a[i];
    f1(a,N,K);
    for(int i=0;i<N-K;i++)
        cout<<a[i]<<" ";
     cout<<endl;
    }
    return 0;
}
