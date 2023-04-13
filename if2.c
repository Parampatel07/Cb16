// Write a programe to body temperature from user and print you are normal if temperature is below 100
#include<stdio.h>
void main()
{
     float temperature;

     printf("Enter your temperature ");
     scanf("%f",&temperature);

     if(temperature < 100)
     {
          printf("You are normal ");
     }
     printf("\nGoodbyee...");
}