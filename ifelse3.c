// Write a programe to findout wether the given year is millineum year or not 
//1000,2000,3000,4000....
#include<stdio.h>
void main()
{
     int year,answer;
     printf("Enter value of year ");
     scanf("%d",&year);
     answer = year % 1000;
     if(answer != 0)
     {
          printf("it is not millineum year");
     }
     else
     {
          printf("it is millineum year");
     }
}