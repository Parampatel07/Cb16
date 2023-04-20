// Write a progame to print following pattern 
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 300
#include<stdio.h>
void main()
{
     int number=2,answer=3;

     printf("%d ",number);
     printf("%d ",answer-number);
     printf("%d ",answer);
     while (answer<300)
     {
          number=answer-number;
          answer = number+answer;
          printf("%d ",answer);
     }
     
     // printf("%d ",answer);
     // answer = second + answer ;
     // printf("%d ",answer);
     // answer = answer + first + second;
     // printf("%d ",answer);
     // second = answer - 

}