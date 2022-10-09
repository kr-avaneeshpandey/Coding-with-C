#include<stdio.h>

int main()
{
    int r,n,i, result=1, count=0;
    printf("Enter The Range :");
    scanf("%d",&r);
 for(n=2;n<=r;n++)   
   {for(i=2;i<n;i++)
     {if(n%i==0)
       {result=0;
        break;
       }
     }
    if(result==1)
     {printf(" %d",n);
      count+=1;
     }
    result=1;
    }
    printf("\nNumber of primes are %d", count);
    return 0;
}