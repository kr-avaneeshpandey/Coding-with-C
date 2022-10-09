#include<stdio.h>

int main()
{
    int i,num[10];
    for(i=0;i<10;i++)
     {printf("Enter number%d",i+1);
      scanf("%d",&num[i]);}
    printf("\nthe original array is \n");
    for(i=0;i<10;i++)
     printf("%d\t",num[i]);
    printf("\n the reverse order is \n");
    for(i=9;i>=0;i--)
     printf("%d\t",num[i]);
    return 0;
}