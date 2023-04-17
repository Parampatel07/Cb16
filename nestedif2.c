// Write a programe to findout how many days a month has without using if else ladder
#include <stdio.h>
void main()
{
     int month;

     printf("Enter value of month ");
     scanf("%d", &month);

     if (month > 0 && month < 13)
     {
          if (month <= 7)
          {
               if (month % 2 == 0)
               {
                    if (month == 2)
                    {
                         printf("it has 28-29 days");
                    }
                    else
                    {
                         printf("It has 30 days");
                    }
               }
               else
               {
                    printf("it has 31 days ");
               }
          }
          else
          {
               if (month % 2 == 0)
               {
                    printf("It has 31 days ");
               }
               else
               {
                    printf("it has 30 days ");
               }
          }
     }
     else
     {
          printf("invalid month ");
     }     
}