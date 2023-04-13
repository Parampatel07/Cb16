// Write a programe to findout which rectangle is smaller outof given 2 rectangle accept height and width from user
#include <stdio.h>
void main()
{
     float height1, height2, width1, width2,area1,area2;
     printf("Enter value of height 1 ");
     scanf("%f", &height1);
     printf("Enter value of width 1 ");
     scanf("%f", &width1);
     printf("Enter value of height 2 ");
     scanf("%f", &height2);
     printf("Enter value of width 2 ");
     scanf("%f", &width2);

     area1 = height1 * width1;
     area2 = height2 * width2;

     if(area1 < area2)
     {
          printf("Rectangle 1 is smaller than Rectangle 2 ");
     }
     else
     {
          printf("Rectangle 2 is smaller than Rectangle 1 ");
     }
     printf("Goodbyee..");
}