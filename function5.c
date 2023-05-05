// Write a programe to make a calc using function also use switch case with it
#include <stdio.h>
int getAdd(int number1, int number2)
{
     int answer;
     answer = number1 + number2;
     printf("the value of answer is %d ", answer);
     return answer;
}
int getSub(int number1, int number2)
{
     int answer;
     answer = number1 - number2;
     printf("the value of answer is %d ", answer);
     return answer;
}
int getmulti(int number1, int number2)
{
     printf("the value of answer is %d ", number1 * number2);
     return number1 * number2;
}
float getDiv(int number1, int number2)
{
     printf("the value of answer is %f ", number1 / number2);
     return number1 / number2;
}
float getModlus(int number1, int number2)
{
     float answer = number1 % number2;
     printf("the value of answer is %f ", answer);
     return answer;
}
void Max(int number1, int number2)
{
     if (number1 > number2)
     {
          printf("the value of num 1 is greater ");
     }
     else if (number2 > number1)
          printf("the value of num 2 is greater ");
}
void Min(int number1, int number2)
{
     if (number1 < number2)
     {
          printf("the value of num 1 is smaller ");
     }
     else if (number2 < number1)
          printf("the value of num 2 is smaller ");
}
void equality(int number1, int number2)
{
     if (number1 == number2)
     {
          printf("both are same ");
     }
     else
     {
          printf("both are not same ");
     }
}
void main()
{
     int num1, num2, option;
     do
     {
          printf("\nEnter value of num1 ");
          scanf("%d", &num1);

          printf("Enter value of num2 ");
          scanf("%d", &num2);

          printf("Select any One ");
          printf("\n Enter 1 for addition ");
          printf("\n Enter 2 for subtraction ");
          printf("\n Enter 3 for multiplication ");
          printf("\n Enter 4 for division ");
          printf("\n Enter 5 for modlus ");
          printf("\n Enter 6 for maximum ");
          printf("\n Enter 7 for minimum ");
          printf("\n Enter 8 for equality ");
          printf("\n Enter 0 to stop ");
          scanf("%d", &option);

          switch (option)
          {
          case 1:
               getAdd(num1, num2);
               break;

          case 2:
               getSub(num1, num2);
               break;

          case 3:
               getmulti(num1, num2);
               break;
          case 4:
               getDiv(num1, num2);
               break;
          case 5:
               getModlus(num1, num2);
               break;
          case 6:
               Max(num1, num2);
               break;
          case 7:
               Min(num1, num2);
               break;
          case 8:
               equality(num1, num2);
               break;
          }
     }while(option != 0);
}