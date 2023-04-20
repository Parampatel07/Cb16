// write a programe to print half pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
void main()
{
     int count = 0,flash=0,size=0;
     // printf("*");
     // printf("\n");
     printf("enter value of size for triangle ");
     scanf("%d",&size);
     while(flash<size)
     {
          printf("\n");
          count = 0;
          while (count <= flash)
          {
               printf("*");
               count = count + 1;
          }
          flash = flash +1;
     }
     // while (count < 2)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("*");

     // printf("\n");
     // count = 0;
     // while (count < 4)
     // {
     //      printf("*");
     //      count = count + 1;
     // }
     // printf("\n");
     // count=0;
     // while(count<5)
     // {
     //      printf("*");
     //      count++;
     // }
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
     // printf("*");
}