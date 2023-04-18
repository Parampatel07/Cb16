// Write a programe to make a calc using switch case 
#include<stdio.h>
void main()
{
     int num1,num2,option;
     printf("Enter value of num1 ");
     scanf("%d",&num1);
     printf("Enter value of num2 ");
     scanf("%d",&num2);

     printf("\nEnter 1 for addition ");
     printf("\nEnter 2 for subtraction ");
     printf("\nEnter 3 for multiplication ");
     printf("\nEnter 4 for division ");
     printf("\nEnter 5 for modlus ");
     printf("\nEnter 6 for minimum ");
     printf("\nEnter 7 for maximum ");
     printf("\nEnter 8 for equality ");
     printf("\nSelect any one option ");
     scanf("%d",&option);

     switch(option)
     {
          case 1:
          printf("the value of answer is %d ",num1 + num2);
          break;

          case 2:
          printf("the value of answer is %d ",num1 - num2);
          break;

          case 3:
          printf("the value of answewr is %d ",num1 * num2);
          break;

          case 4:
          printf("the value of answer is %d",num1 / num2);
          break;

          case 5:
          printf("the value of answer is %d",num1 %num2);
          break;

          case 6:
          if(num1 < num2)
          {
               printf("num1 is smaller ");
          }
          else
          {
               printf("num2 is smaller ");
          }
          break;

          case 7:
          if(num1>num2)
          {
               printf("num1 is greater ");
          }
          else
          {
               printf("num2 is greater ");
          }
          break;

          case 8:
          if(num1==num2)
          {
               printf("Both are same ");
          }
          else
          {
               printf("Both are not same ");
          }
          break;

          default:
          printf("Please select a valid option ");
          break;
     }
}