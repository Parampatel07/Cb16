// with arguments with return value function
// Write a programe to peform addition using function 
#include<stdio.h>
int get_add(int number1 ,int number2)
{
     int answer ;
     answer = number1 + number2 ; 
     return answer ; 
}
void main()
{
     int number1 , number2,answer=0;

     printf("Enter value of number 1 ");
     scanf("%d",&number1);
     printf("Enter value of number 2 ");
     scanf("%d",&number2);
     answer = get_add(number1,number2);
     printf("the value of answer is %d ",answer);
}