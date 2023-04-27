// Write a programe to accept name from user
#include <stdio.h>
void main()
{
     char name[25], space = 0;
     int count = 0,temp=0;
     printf("Enter your name ");
     for (count = 0; count < 25; count++)
     {
          scanf("%c", &name[count]);
          if (name[count] == '\n')
          {
               break;
          }
     }
     printf("total number of alphbets are %d ",count);
     temp = count ;
     printf("your name is ");
     for (count = temp ; count >= 0; count--)
     {
          printf("%c", name[count]);
     }
     printf("\nGoodbyee..");
}