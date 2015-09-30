#include<bits/stdc++.h>

using namespace std;
int A[100005];

int main()
{
    int t,n,k;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
        }
        if(k%2)
        {
            int x=k/2;
            for(int i=n-1-x; i>=k-x; i--)
            {
                cout<<A[i]<<' ';
            }
        }   
        else
        {
            int x=k/2;
            for(int i=x; i<n-x; i++)
            {
                cout<<A[i]<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
