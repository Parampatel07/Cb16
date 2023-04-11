// Write a programe to find bmi of user 
#include<stdio.h>
void main()
{
     float weight,meter,bmi;
     int foot,inch,total_inch;

     printf("Enter your weight in kg");
     scanf("%f",&weight);
     printf("Enter your height in foot ");
     scanf("%d",&foot);
     printf("Enter your height in inch ");
     scanf("%d",&inch);

     printf("weight is %f ",weight);
     printf("\nHeight in foot in %d",foot);
     printf("\nHeight in inch in %d",inch);

     total_inch = foot * 12 ;
     total_inch = total_inch + inch;
     printf("\nthe value of total inch is %d ",total_inch);
     meter = total_inch / 39.37 ;
     printf("\nthe value of meter is %f ",meter);

     bmi = weight / (meter * meter);
     printf("\nThe value of bmi is %f ",bmi);
}