// Write a programe to accept name from user
#include <stdio.h>
void main()
{
     char name[25], count = 0;

     printf("Enter your name ");
     for (count = 0; count < 25; count++)
     {
          scanf("%c", &name[count]);
          if (name[count] == '\n')
          {
               break;
          }
     }
     printf("your name is ");
     for(count=0;count<25;count++)
     {
          printf("%c", name[count]);
          if (name[count]=='\n')
          {
               break;
          }
     }
     printf("\nGoodbyee..");
}