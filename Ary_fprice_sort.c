#include<stdio.h>

int main()
{
    int i,j;
    float a,number[4]={24.5,26.7,29.5,123.89};
    for(i=0;i<4;i++)
    { for(j=i+1;j<4;j++)
      { if(number[i]>number[j])
        { a=number[i];
          number[i]=number[j];
          number[j]=a;
        }
      }
    }
    printf("\n The sorted price is \n ");
    for(i=0;i<4;i++)
     printf("%f\n",number[i]);
    return 0;
}