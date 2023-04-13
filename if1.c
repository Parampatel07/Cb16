//Write a programe to print you are eligible for voting if user's age is greater or equal to 18 take age as input from user 
#include<stdio.h>
void main()
{
     int age;
     printf("Enter your age ");
     scanf("%d",&age);
     if(age >= 18)
     {
          printf("You are eligible for voting ");
     }
     printf("\nGoodbyee...");
}