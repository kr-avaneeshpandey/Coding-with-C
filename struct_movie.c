#include <stdio.h>
#include <string.h>

struct movie 
{
     int movie_id;
     char movie_name[30];
     char director_name[30];
     int length;
};

int main() 
{
     int i;
     struct movie record[2];

     // 1st student's record
     record[0].movie_id=1;
     strcpy(record[0].movie_name, "PK");
     strcpy(record[0].director_name, "Rajkumar Hirani");
     record[0]. length = 173;

     // 2nd student's record         
     record[1].movie_id=2;
     strcpy(record[1].movie_name, "3 idiots");
     strcpy(record[1].director_name , "Rajkumar Hirani");
     record[1]. length = 171;
    
     // 3rd student's record
     record[2].movie_id=3;
     strcpy(record[2].movie_name, "Sanju");
     strcpy(record[2].director_name , "Rajkumar Hirani");
     record[2]. length = 161;

     for(i=0; i<3; i++)
     {
         printf("list of Movie : %d \n", i+1);
         printf("Movie Id is: %d \n", record[i]. movie_id);
         printf("Movie Name is: %s \n", record[i].movie_name);
         printf("Director Name is: %s\n", record[i]. director_name);
         printf("Length of movie is: ", record[i]. length);
     }
     return 0;
}