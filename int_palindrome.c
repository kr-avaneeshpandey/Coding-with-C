/* Reverse of integer and palindrome */
#include<stdio.h>

int main()
{
    int n,rev=0,rem,i;
    printf("Enter the number :");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {rem=i%10;
     rev=rev*10+rem;
     i/=10;
    }
    printf("Reverse is %d",rev);
    if(rev == n)
     printf("\nIt is palindrome.");
    return 0;
}