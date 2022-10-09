#include<stdio.h>
#include<string.h>
#include<conio.h>

struct student {
int roll_no;
char name[30],course[20];
int fee_paid;};


struct student record[4]={
{01,"Avaneesh","Bsc",25399},
{02,"Ashutosh","BTech",50000},
{03,"Sandeep","BA",3000},
{04,"Rajat","Bsc",4200}};

void main()
{ int i,r;
  printf("Enter Roll No of Student :");
  scanf("%d",&r);
  for(i=0;i<4;i++){
    if(r==record[i].roll_no)
       printf("\nName:\t\tFee Paid:\n%s\t\t%d ", record[i].name, record[i].fee_paid);
    }
}
    
    
    
    
    
    
    
    