#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
     int i,temp,k=ar_size-1;
    temp=ar[ar_size-1];
    while(ar[k-1]>temp)
        {
        ar[k]=ar[--k];
       // printf("%d",ar[k+1]);
        for(i=0;i<ar_size;i++)
           printf("%d ",ar[i]);
        printf("\n");
    }
    ar[k]=temp;
    for(i=0;i<ar_size;i++)
            printf("%d ",ar[i]);

}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}

