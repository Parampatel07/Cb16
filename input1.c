// Example of input 1
#include<stdio.h>
#include<stdlib.h>
void main()
{
     int number1;
     float num2;
     char letter;

     // number1 = 10;
     // num2 = 20;
     // letter ='p'
     printf("Enter value of number 1 ");
     scanf("%d",&number1);
     printf("Enter value of number 2 ");
     scanf("%f",&num2);
     fflush(stdin);
     printf("Enter any letter ");
     scanf("%c",&letter);

     printf("\nThe value of number 1 is %d ",number1);
     printf("\nThe value of number 2 is %f ",num2);
     printf("\nThe value of letter is %c ",letter);
}