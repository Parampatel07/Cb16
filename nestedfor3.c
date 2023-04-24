// *
// *  *
// *    *
// *      *
// *        *
// ***********
#include <stdio.h>
void main()
{
     int space = 0, count = 0;
     printf("* ");
     // printf("\n");
     for(count=0;count<5;count++)
     {
          printf("\n");
          printf("* ");
          for (space = 0; space < count; space++)
          {
               printf("_ ");
          }
          printf("* ");
     }
     printf("\n");
     for (count = 0; count < 7; count++)
     {
          printf("* ");
     }
     // printf("* ");
     // printf("\n");
     // printf("* ");
     // for (space = 0; space < 3; space++)
     // {
     //      printf("_ ");
     // }
     // printf("* ");
     // printf("\n");
     // printf("* ");
     // for (space = 0; space < 4; space++)
     // {
     //      printf("_ ");
     // }
     // printf("* ");
     
}