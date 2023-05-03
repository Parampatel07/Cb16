// Write a programe to findout which office is greater based on area of 2 office (take lenght and width as input from user determine wheter to use a array or not )
#include<stdio.h>
void main()
{
     int lenght1,lenght2,width1,width2;
     float area1,area2;

     printf("Enter the value of lenght 1 ");
     scanf("%d",&lenght1);
     printf("Enter the value of width 1 ");
     scanf("%d",&width1);
     printf("Enter the value of lenght 2 ");
     scanf("%d",&lenght2);
     printf("Enter the value of width 2 ");
     scanf("%d",&width2);

     area1 = lenght1 * width1;
     area2 = lenght2 * width2;

     printf("\nthe value of area 1 is %f and value of area2 is %f \n",area1,area2);

     if(area1 < area2)
     {
          printf("the value of area 2 is greater ");
     }
     else if(area1 > area2)
     {
          printf("the value of area 1 is greater ");
     }
     else
     {
          printf("Both are same ");
     }
     printf("\nGoodbyee...");
}