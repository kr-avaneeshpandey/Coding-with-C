#include<stdio.h>

int main()
{
    float l,b,r,arR,arC;
    printf("Enter length, breadth and radius of rectangle and circle respectively: ");
    scanf("%f%f%f",&l,&b,&r);
    arR=l*b;
    arC=3.14*r*r;
    printf("Area of rectangle is %f\n",arR);
    printf("Area of circle is %f\n",arC);
    return 0;
    
}