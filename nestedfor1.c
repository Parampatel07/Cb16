// Write a programe to print following triangle
// 1
// 2  2
// 3  3  3
// 4  4  4  4
// 5  5  5  5  5
#include <stdio.h>
void main()
{
     int count = 0, flash = 0;
     for (flash = 0; flash < 5; flash++)
     {
          for (count = 0; count <= flash; count = count + 1)
          {
               printf("%d ",flash+1);
          }
          printf("\n");
     }
     // for (count = 0; count < 3; count++)
     // {
     //      printf("*");
     // }
     // printf("\n");
     // for (count = 0; count < 4; count++)
     // {
     //      printf("*");
     // }
     // printf("\n");
     // for(count=0;count<5;count++)
     // {
     //      printf("*");
     // }
}