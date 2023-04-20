// Write a programe to print numbered half pyramid
// https://i1.faceprep.in/fp/articles/img/55984_1580817324.png
#include <stdio.h>
void main()
{
     int count = 0,flash=0;
     // printf("*");
     // printf("\n");

     // while (count < 3)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("\n");
     // count=0;
     // while(count<4)
     // {
     //      printf("*");
     //      count++;
     // }
     while(flash<=5)
     {
          while (count < flash)
          {
               printf("%d ",count+1);
               count++;
          }
          printf("\n");
          count = 0;
          flash++;
     }
}