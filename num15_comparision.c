#include <stdio.h>

int main() 
{
    int a[15], n=15;
    int largest1, largest2, smallest, i;
    printf("enter elements");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
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
