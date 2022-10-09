#include<stdio.h>

void price(char* s)
{
    int count = 0,price=0, i;
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("\nNumber of words in given string are: %d\n", count + 1);
    price=(((count+1)-10)*2)+15;
    printf("\n total payable charge is %d",price);
}
int main()
{  char s[200];
   printf("Enter the text : ");
   scanf("%[^\n]s", s);
   printf("\n Text is: \n%s",s);
   price(s);
   return 0;
}