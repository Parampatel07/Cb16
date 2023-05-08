// Write a programe to input and output 3 countries time in hours,minutes and counrties name
#include <stdio.h>
struct time
{
     int hours;
     float minutes_second;
     char name[25];
};
void main()
{
     struct time country[3];

     for (int count = 0; count < 3; count++)
     {
          printf("Enter hours for country %d ", count + 1);
          scanf("%d", &country[count].hours);
          printf("Enter minutes_seconds for country %d ", count + 1);
          scanf("%f", &country[count].minutes_second);
          printf("Enter name for country %d ", count + 1);
          scanf("%s", &country[count].name);
     }

     for(int count=0;count<3;count++)
     {
          printf("\nName of country %d = %s ",count+1,country[count].name);
          printf("\nHours of country %d = %d ",count+1,country[count].hours);
          printf("\nMinutes_second of country %d = %.2f ",count+1,country[count].minutes_second);
     }
}