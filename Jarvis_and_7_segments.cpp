#include <iostream>
using namespace std;

int main()
{
    int T,n,min,val,sum,temp,num[10000000],a[10]={6,2,5,5,4,5,6,3,7,6};
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>num[j];
        }
        min=999999;
        for(int j=0;j<n;j++)
        {
            temp=num[j];
            sum=0;
            if(temp==0)
            {
                sum=a[temp];
            }
            else{
                 while(temp>0)
                {
                    sum+=a[temp%10];
                    temp=temp/10;
                }
                //printf("%d \n",sum);
            }
            if(sum<min)
            {
                min=sum;
                val=num[j];
                //printf("\t %d \n",sum);
            }
        }
        cout << val << endl;
    }
    return 0;
}


/**
All over the world, peoples are working on energy solution. 
It would be a tough time for our next generation to survive if we don’t think about solution. 
Tony stark is working on a new project and wants to display his project using “seven segment display - concept”. 
Tony Stark gave Jarvis a task to find a number from his Favorite list of number for which the energy consumption is lowest.

(Assuming that for a digit to represent Tony stark is using 7 bulbs and only those bulbs light up which are required to represent a number and rest other would be completely off.)

Help Jarvis and conserve energy.

Input:
First line will contain the number of test cases and for every test case first line will contain length of favorite list and the second line for a test case will contain n numbers

Output:
For every test case print the answer. 
If there exist more than 1 numbers for which same number of bulbs are required than output the number which occurs first in the Favorite list.

Constraints:
Test cases< 10
A[i] < 10^6
Size of list < 10^5

SAMPLE INPUT 
1
5
1 2 3 4 5
SAMPLE OUTPUT 
1
Explanation
Number 1 needs only two bulbs to represent.

**/
