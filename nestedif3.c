// Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
// https://in.pinterest.com/pin/81698180718875314/
#include <stdio.h>
void main()
{
     int month, day;

     printf("Enter your birth month ");
     scanf("%d", &month);
     printf("Enter your birth day ");
     scanf("%d", &day);

     if ((month > 12 || month < 0) || (day>31 || day<0))
     {
          printf("Invalid input ");
     }
     else
     {
          if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
          {
               printf("Your zodiac sign is aries and symbol is ram ");
          }
          else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
          {
               printf("Your zodiac sign is taurus and symbol is the bull ");
          }
     }
}