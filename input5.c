// Write a programe to split given two digit number 
//number = 56
//first = 5,second = 6
#include<stdio.h>
void main()
{
     int number,first,second;

     printf("Enter value of number only 2 digits");
     scanf("%d",&number);
     // number = 56;

     printf("the value of number is %d ",number);

     first = number / 10;
     second = number % 10;
     printf("\nThe value of first is %d and second is %d ",first,second);
}