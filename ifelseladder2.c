// Write a programe build a calc
// ->addition
// ->subtraction
// ->multiplication
// ->division
// ->modlus
// ->max
// ->min
// ->equality
#include <stdio.h>
void main()
{
     int num1, num2, option, answer;

     printf("Enter value of num1 ");
     scanf("%d", &num1);
     printf("Enter value of num2 ");
     scanf("%d", &num2);

     printf("Enter 1 for addition ");
     printf("\nEnter 2 for subtraction ");
     printf("\nEnter 3 for multiplication ");
     printf("\nEnter 4 for division ");
     printf("\nEnter 5 for modlus ");
     printf("\nEnter 6 for maximum ");
     printf("\nEnter 7 for minimum ");
     printf("\nEnter 8 for equality ");
     printf("\nSelect any one option ");
     scanf("%d", &option);

     if (option == 1)
     {
          answer = num1 + num2;
          printf("the value of answer is %d ", answer);
     }
     else if (option == 2)
     {
          answer = num1 - num2;
          printf("the value of answer is %d ", answer);
     }
     else if (option == 3)
     {
          answer = num1 * num2;
          printf("the value of answer is %d ", answer);
     }
     else if (option == 4)
     {
          answer = num1 / num2;
          printf("the value of answer is %d ", answer);
     }
     else if (option == 5)
     {
          answer = num1 % num2;
          printf("the value of answer is %d ", answer);
     }
     else if (option == 6)
     {
          if (num1 > num2)
          {
               printf("num1 is greater ");
          }
          else
          {
               printf("num2 is greater");
          }
     }
     else if (option == 7)
     {
          if (num1 < num2)
          {
               printf("num1 is smaller");
          }
          else
          {
               printf("num2 is smaller");
          }
     }
     else if (option == 8)
     {
          if (num1 == num2)
          {
               printf("num1 and num2 are equal ");
          }
          else
          {
               printf("both are not same ");
          }
     }
     else
     {
          printf("invalid option ");
     }
     printf("\nGoodbyee...");
}