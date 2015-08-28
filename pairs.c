#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/* Head ends here */

int pairs(int a_size, int* a, int k) {
    
   int i,j,ans=0;
    
    /* Write your code here */
    for(i=0;i<a_size;i++)
        for(j=i+1;j<a_size;j++)
            if((a[i]-a[j]==k)||(a[j]-a[i]==k))
                ans++;
    
   return ans;
}

/* Tail starts here */
int main() {
    int res;
   
    int _a_size,_a_i,_k;
    scanf("%d %d", &_a_size,&_k);
    int _a[_a_size];
    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }
   res=pairs(_a_size,_a,_k);
   printf("%d\n",res);    
    return 0;
}

