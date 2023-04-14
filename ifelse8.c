// Write a programe to findout largest value out of given three values
#include <stdio.h>
void main()
{

     int num1, num2, num3;
     printf("Enter value of num1");
     scanf("%d", &num1);
     printf("Enter value of num2");
     scanf("%d", &num2);
     printf("Enter value of num3");
     scanf("%d", &num3);

     if (num1 > num2 && num1 > num3)
     {
          printf("Num1 is largest value ");
     }
     if (num2 > num1 && num2 > num3)
     {
          printf("Num2 is largest value ");
     }
     if (num3 > num2 && num3 > num1)
     {
          printf("Num3 is largest value ");
     }
     else
     {
          printf("All are same ");
     }
     printf("\nGoodbyee..");
}