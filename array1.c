// Example of input output in array
// Write a programe to store 5 subject marks for a student
#include <stdio.h>
void main()
{
     int marks[5], count = 0;
     for (count = 0; count < 5; count++)
     {
          printf("Enter marks for subject %d ", count + 1);
          scanf("%d", &marks[count]);
     }
     count=0;
     while(count<5)
     {
          printf("\nThe marks of subject %d = %d ",count+1,marks[count]);
          count++;
     }
     // printf("\nThe marks for subject 2 = %d", marks[1]);
     // printf("\nThe marks for subject 3 = %d ", marks[2]);
     // printf("\nThe marks for subject 4 = %d", marks[3]);
     // printf("\nThe marks for subject 5 = %d", marks[4]);
     // printf("Enter marks for subject 2 ");
     // scanf("%d",&marks[1]);
     // printf("Enter marks for subject 3 ");
     // scanf("%d",&marks[2]);
     // printf("Enter marks for subject 4 ");
     // scanf("%d",&marks[3]);
     // printf("Enter marks for subject 5 ");
     // scanf("%d",&marks[4]);
}