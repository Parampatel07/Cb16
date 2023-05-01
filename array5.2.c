// Write a progame to find sum and average for 1 player for 5 matches also arrange the runs in ascending order
#include <stdio.h>
void main()
{
     int runs[5], count = 0, sum = 0, temp = 0,flash=0;
     float average = 0;
     while (count < 5)
     {
          printf("Enter value of runs for match %d ", count + 1);
          scanf("%d", &runs[count]);
          count++;
     }
     count = 0;
     do
     {
          printf("\nthe value of runs for match %d = %d ", count + 1, runs[count]);
          count++;
     } while (count < 5);
     for (count = 0; count < 5; count++)
     {
          sum = sum + runs[count];
     }
     printf("\nthe value of total runs is %d ", sum);
     average = sum / 5;
     printf("\nthe value of average runs is %f ", average);

     for(flash=0;flash<5;flash++)
     {
          for (count = flash+1; count < 5; count++)
          {
               if (runs[flash] > runs[count])
               {
                    temp = runs[flash];
                    runs[flash] = runs[count];
                    runs[count] = temp;
               }
          }
     }
     count = 0;
     do
     {
          printf("\nthe value of runs for match after sorting  %d = %d ", count + 1, runs[count]);
          count++;
     } while (count < 5);
}