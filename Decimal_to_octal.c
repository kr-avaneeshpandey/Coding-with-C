/* Conversion decimal to Octal */
#include<stdio.h>

int main()
{
    int d,n,i=1, result=0;
    printf("Enter Any Number :");
    scanf("%d",&d);
    n=d;
    while(n!=0)
     {result+=n%8*i;
      n/=8;
      i*=10;
     }
    printf("\n Octal equivalent of %d is %d",d,result);
    return 0;
}