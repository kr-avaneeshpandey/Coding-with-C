#include<stdio.h>

int main()
{
    int rnum,phys,chem,math,total;
    float avg,per;
    char name,grade;
    printf("\nEnter Roll No. : ");
    scanf("%d",&rnum);
    printf("\nEnter Name : ");
    scanf("%c",&name);
    printf("\nEnter Physics Marks : ");
    scanf("%d",&phys);
    printf("\nEnter Chemistry Marks : ");
    scanf("%d",&chem);
    printf("\nEnter Mathematics Marks : ");
    scanf("%d",&math);
    total=phys+chem+math;
    avg=total/3;
    per=avg;
    if(per>=75)
     grade='A';
    if(per>=60)
     {if(per<75)
       grade='B';
     }
    if(per>=45)
     {if(per<60)
      grade='C';
     }
    if(per<45)
     grade='D';
    printf("\n Total Marks = %d\n average Marks = %f\n Percentage=%f \n \n Grade is  %c ", total,avg,per,grade);
    return 0;
}