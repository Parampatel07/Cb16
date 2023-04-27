// Write a programe to print factorial of given number
// 5 = 5 * 4 * 3 * 2 * 1
#include <stdio.h>
void main()
{
     int number = 0, answer = 0, temp = 0;
     printf("Enter your number ");
     scanf("%d", &number);
     if (number == 1)
     {
          printf("your answer is 1 ");
     }
     else if (number <= 0)
     {
          printf("number cannot be negative ");
     }
     else
     {
          answer = number;
          temp = number - 1; // 4
          do
          {
               answer = answer * temp; // 20
               temp = temp - 1;
          } while (temp > 1);
          printf("The answer is %d ", answer);
     }

     // 3
     // answer = answer * temp; // 60
     // temp = temp - 1;      // 2
     // answer = answer * temp; // 120
     // temp = temp - 1; // 1
     // answer = answer * temp;
}