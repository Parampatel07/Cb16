#include <stdio.h>
void main()
{
     int matche[5][5], count = 0;
     printf("Enter run of matche 1");
     for (count = 0; count < 5; count++)
     {
          printf("\nEnter run for player %d", count + 1);
          scanf("%d", matche[count]);
     }
}