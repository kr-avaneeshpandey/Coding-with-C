/* Area of Triangle */
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,ar;
    printf("\nEnter the sides of triangle : ");
    scanf("f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    ar=pow(s*(s-a)*(s-b)*(s-c),0.5);
    printf("\nArea of Triangle is %f",ar);
    return 0;
}