/* Check Odd or Even */
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter the Number : ");
    scanf("%d",&num);
    if (num % 2 == 0)
     printf("\n %d is even ",num);
    else 
     printf("\n %d is odd",num);
    return 0;
}