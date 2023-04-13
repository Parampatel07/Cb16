// Write a programe to findout wether the user given number is even or not 
#include<stdio.h>
void main()
{
     int number=0;
     printf("Enter your number ");
     scanf("%d",&number);

     if(number % 2 == 0)
     {
          printf("number is even ");
     }
     else
     {
          printf("number is odd");
     }
     printf("\nGoodbyee..");
}