#include<stdio.h>

int main()
{
    int i,n[]={5,5,5,5,5,5,5,5,5,5},total=0;
    float avg;
    for(i=0;i<10;i++)
     total+=n[i];
    avg=total/10;
    printf("the total and average of the given number is %d and %f", total,avg);
    return 0;
}