// Write a programe to find yearly income (take monthly income from user )
#include<stdio.h>
void main()
{
     int monthly_income=0,yearly_income=0;

     printf("Enter your monthly income ");
     scanf("%d",&monthly_income);

     yearly_income = monthly_income * 12;
     printf("Your yealry income is %d ",yearly_income);
}