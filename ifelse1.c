// Write a programe to find wether which variable is greater out of given 2 variable
// a , b
#include <stdio.h>
void main()
{
     int a, b;
     printf("Enter value of a");
     scanf("%d", &a);
     printf("Enter value of b");
     scanf("%d", &b);

     if(a > b)
     {
          printf("A is greater than B");
     }
     else
     {
          printf("B is greater than A");
     }
     printf("\nGoodbyee...");
}