#include<stdio.h>

int main()
{
   int min,max,i,j,count;
    printf("Enter the min and Max values");
   scanf("%d%d",& min,&max);
   for(i=min;i<=max;i++)
  {
    count=0;
    for(j=1;j=i;j++)
     if(i%j==0)
     count++;
    }
    if(count==2)
     printf("\n%d",i);
    return 0;
}