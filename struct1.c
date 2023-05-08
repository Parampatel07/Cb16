// Write a programe to input and output 3 countries time in hours,minutes and counrties name 
#include<stdio.h>
struct time 
{
     int hours;
     float minutes_seconds;
     char name[25];
}t3;
void main()
{

     struct time t1,t2;

     printf("Enter hours of country 1 ");
     scanf("%d",&t1.hours);
     printf("Enter minutes.seconds of country 1 ");
     scanf("%f",&t1.minutes_seconds);
     printf("Enter name of country 1 ");
     scanf("%s",&t1.name);

     printf("\nThe value of hours for country 1 is %d ",t1.hours);
     printf("\nThe value of minutes_second for country 1 is %.2f ",t1.minutes_seconds);
     printf("\nthe name of country 1 is %s ",t1.name);


     printf("\nEnter hours of country 2 ");
     scanf("%d",&t2.hours);
     printf("Enter minutes.second for country 2");
     scanf("%f",&t2.minutes_seconds);
     printf("Enter name of country 2 ");
     scanf("%s",&t2.name);

     
     printf("\nThe value of hours for country 2 is %d ",t2.hours);
     printf("\nThe value of minutes_second for country 2 is %.2f ",t2.minutes_seconds);
     printf("\nthe name of country 2 is %s ",t2.name);

     printf("\nEnter hours of country 3 ");
     scanf("%d",&t3.hours);
     printf("Enter minutes_second of country 3 ");
     scanf("%f",&t3.minutes_seconds);
     printf("Enter name of country 3 ");
     scanf("%s",&t3.name);

     
     printf("\nThe value of hours for country 3 is %d ",t3.hours);
     printf("\nThe value of minutes_second for country 3 is %.2f ",t3.minutes_seconds);
     printf("\nthe name of country 3 is %s ",t3.name);

}