// Write a programe to print following pattern
// 1 8 27 64 125.... 10000
#include <stdio.h>
void main()
{
     int number = 1, answer=0;

     printf("%d ", number);
     while(number<21)
     {
          number = number + 1;
          answer = number * number * number;
          printf("%d ", answer);
     }
     // number = number + 1;
     // answer = number * number * number;
     // printf("%d ", answer);

     // number = number + 1;
     // answer = number * number * number;
     // printf("%d ", answer);

     // number = number + 1;
     // answer = number * number * number;
     // printf("%d ", answer);
}