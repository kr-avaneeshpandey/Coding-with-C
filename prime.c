#include<stdio.h>

int main()
{
    int n,i, result=1;
    printf("Enter Any Positive Integer :");
    scanf("%d",&n);
    for(i=2;i<n;i++)
     {if(n%i==0)
       {result=0;
        break;
       }
     }
    if(n==1)
     {printf("\n1 is neither prime nor composite.");
     }
    else
     {if(result==1)
       printf("\n%d is a prime number",n);
      else
       printf("\n%d is not a prime number",n);
     }
    return 0;
}