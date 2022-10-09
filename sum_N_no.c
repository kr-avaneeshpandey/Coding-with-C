/* Sum of N natural numbers */
#include<stdio.h>

int main()
{
    int i,n,r=0;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1;i<n+1;i=i+1)
     {r=r+i;}
    printf("Sum of %d terms of natural number is %d",n,r);
    return 0;
}