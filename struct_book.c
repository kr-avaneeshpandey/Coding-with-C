#include <stdio.h>
#include <string.h>

struct book 
{
     int barcode;
     char bookname[30];
     int bookprice;
};

int main() 
{
     int i,j;
     char bn[30];
     struct book record[50],t;

     for(i=0;i<50;i++){
     printf("\nEnter barcode :");
     scanf("%d",&record[i]. barcode);
     printf("Enter Book Name :");
     scanf("%s",&bn);
     strcpy(record[i].bookname,bn);
     printf("Enter book price :");
     scanf("%d",&record[i].bookprice);
}
     for(i=0;i<50;i++)
    {
        for(j=0;j<49;j++)
        {
            if(record[j]. bookprice<record[j+1]. bookprice)
            {
                t=record[j];
                record[j]=record[j+1];
                record[j+1]=t;
            }}}
    printf("\nbook info in terms of bookprice in ascending order \n");
    printf("\nBookName\t\BookPrice\n");
    printf("-------------------------------------------------------------------------------\n");
    for(i=49;i>=0;i--)
    {
        printf("%s\t\t\t%d\n", record[i].bookname, record[i]. bookprice);
    }
          
     return 0;
}