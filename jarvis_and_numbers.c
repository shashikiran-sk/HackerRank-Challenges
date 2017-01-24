#include <stdio.h>
int base(int N,int i)
{
    int rem=0;
    while(N>0)
    {
        rem+=N%i;
        N=N/i;
    }
    //printf("%d",rem);
    return rem;
}
int main()
{
    int T,N,i,gcd,sum;
    scanf("%d",&T);
    while(T--)
    {
        sum=0;
        scanf("%d",&N);
        for(i=2;i<=N-1;i++)
        {
            sum=sum+base(N,i);
        }
        //printf("%d",sum);
        for(i=1;i<=sum && i<=N-2;i++)
        {
            if(sum%i==0 && (N-2)%i==0)
                gcd=i;
        }
        printf("%d\n",(N-2)/gcd);
    }
}

/**
After defeating Mandarin in Iron man 3, Jarvis is most of time free and now he has started playing with numbers. 
Jarvis being an AI (Artificial Intelligence) solves almost all the riddle given by Tony Stark very quickly. 
This time Tony gave him a problem about base conversion’s but the problem statement given by Tony seems to be confusing and Jarvis asked for Help! 
Problem Statement – “123 when converted in base 16, it consist of two digits 7 and 11 so the sum of the numbers is 18,(For Given N) 
Find denominator of average(irreducible form) of sum of all the numbers formed on conversions from base 2 to N-1”.

Can you help Jarvis?

Input:

First line will have the number of test case (t) and then t subsequent lines will contain a number N.

Output:

For every test case, give answer in new line.

Constraints:
T<10
3<=N<=1000

SAMPLE INPUT 
2
5
7
SAMPLE OUTPUT 
3
1
Explanation
1 st test case -> average on converting 5 to different bases is = 7/3 so answer to the problem is 3

2nd test case -> 3/1 so answer is 1

**/
