/* Sum and Difference */
#include<stdio.h>
int main()
{
    int n1,n2,sum,dif;
    printf("\nEnter the Numbers : ");
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    dif=n1-n2;
    printf("\n Their sum is %d ",sum);
    printf("\n Their difference is %d ",dif);
    return 0;
}