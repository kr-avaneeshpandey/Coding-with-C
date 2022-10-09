#include <stdio.h>

int main() 
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int largest1, largest2, smallest, i,n=20;
    largest1 = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] > largest1) {
            largest1 = a[i];
        }
    }
    largest2 = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > largest2 && a[i] < largest1)
            largest2 = a[i];
    }
    smallest =a[0];
    for(i=1;i<n;i++)
     { if(a[i]<smallest)
         smallest=a[i];
     }
    printf("First,second largest and smallest number is %d,%d and %d ", largest1, largest2, smallest);
    return 0;
}
