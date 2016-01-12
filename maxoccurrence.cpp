#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char s[10000],lt;
    int n,maxcount=0,count=0;
    cin>>s;
    n=strlen(s);
    for(int i=0;i<n;i++)
    {
    	
    	count=0;
    	for(int j=0;j<n;j++)
    		if(s[i]==s[j])
    			count++;
    	if(maxcount<=count)
    	{
    		if(maxcount==count)
    		{
    			if(toascii(lt)>toascii(s[i]))
    			{
    				lt=s[i];
    			}
    		}
    		else
    		{	
    			maxcount=count;
    			lt=s[i];
    		}
    	}
    }
    cout<<lt<<" "<<maxcount<<endl;
    return 0;
}



/*You are given a string which comprises of lower case alphabets (a-z), upper case alphabets (A-Z), numbers, (0-9) and special characters like !,-.; etc.

You are supposed to find out which character occurs the maximum number of times and the number of its occurrence, in the given string. If two characters occur equal number of times, you have to output the character with the lower ASCII value.

For example, if your string was: aaaaAAAA, your output would be: A 4, because A has lower ASCII value than a*/