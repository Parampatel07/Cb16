// without arguments with return value function
// Write a programe to findout area of circle 
#include<stdio.h>
float getPI()
{
    return  3.14159;
}
void main()
{
     int radius;
     float answer,pi ; 
     printf("Enter value of radius ");
     scanf("%d",&radius);
     pi = getPI();
     answer = pi * radius * radius;
     printf("the value of area of circle is %f ",answer);
}