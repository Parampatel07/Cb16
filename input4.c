// Write a programe to find area of circle take radius from user 
// pi * r* r 
#include<stdio.h>
void main()
{
     float radius ,area=0;
     printf("Enter radius of circle ");
     scanf("%f",&radius);
     area = 3.141592 * (radius * radius);
     printf("The area of circle is %f ",area);
}