// Write a programe to findout how many days user given month has
#include <stdio.h>
void main()
{
     int months;

     printf("Enter any month ");
     scanf("%d", &months);

     if (months == 1 || months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12)
     {
          printf("it has 31 days ");
     }
     else if(months == 2)
     {
          printf("it has 28-29 days");
     }
     else
     {
          printf("it has 30 days ");
     }
}