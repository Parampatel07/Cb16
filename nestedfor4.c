// write a programe to print full pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
void main()
{
     int space = 0, count = 0,flash=0,temp=2,size=0;
     printf("Enter size of triangle ");
     scanf("%d",&size);
     for (space = 0; space < size; space++)
     {
          printf("_");
     }
     printf("*");
     printf("\n");
     for(flash=size-1;flash>=0;flash--)
     {
          for (space = 0; space < flash; space++)
          {
               printf("_");
          }
          for (count = 0; count < temp; count++)
          {
               printf("*");
               printf("_");
          }
          printf("\n");
          temp++;
     }
     // for (space = 0; space < 3; space++)
     // {
     //      printf("_");
     // }
     // for (count = 0; count < 3; count++)
     // {
     //      printf("*");
     //      printf("_");
     // }
     // printf("\n");
     // for (space = 0; space < 2; space++)
     // {
     //      printf("_");
     // }
     // for(count=0;count<4;count++)
     // {
     //      printf("*");
     //      printf("_");
     // }
}