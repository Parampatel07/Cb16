// Write a programe to claculate sum and average of 5 subject marks for 1 student
#include <stdio.h>
void main()
{
     int marks[5], count = 0, sum = 0;
     float average=0;
     do
     {
          printf("Enter marks for subject %d ", count + 1);
          scanf("%d", &marks[count]);
          count++;
     } while (count < 5);
     count = 0;
     do
     {
          printf("\nThe marks for subject %d = %d ", count + 1, marks[count]);
          count++;
     } while (count < 5);
     for(count=0;count<5;count++)
     {
          sum = sum + marks[count];
     } 
     printf("\nThe value of sum is %d ", sum);
     average = sum / 5 ;
     printf("\nThe value of average is %f ",average);
     // sum = sum + marks[1]; // 10 + 20
     // sum = sum + marks[2]; // 30 + 30
     // sum = sum + marks[3]; // 60 + 40
     // sum = sum + marks[4]; // 100 + 50
}