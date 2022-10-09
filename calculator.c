/* Calculator */
#include<stdio.h>
int main()
{
    int n1,n2 ;
    char opr;
    printf("\nEnter the Numbers with operation (e.g a + b): ");
    scanf("%d %c %d",&n1,&opr,&n2);
    if (opr=='+')
     printf("\n %d + %d = %d",n1,n2,n1+n2);
    if(opr=='-')
     printf("\n %d - %d = %d",n1,n2,n1-n2);
    if(opr=='*')
     printf("\n %d * %d = %d",n1,n2,n1*n2);
    if(opr=='/')
     {if(n2 == 0)
       printf("Can't divide with zero");
      else
       printf("\n %d / %d = %d",n1,n2,n1/n2);
     }
    return 0;
}