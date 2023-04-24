// Write a programe to print
// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 1000
// 1  5  9   13
#include <stdio.h>
void main()
{
     int number = 1, answer = 0, temp = 5;

     printf("%d ", number);
     answer = number + 5;
     for(temp=9;answer<1000;temp=temp+4)
     {
          printf("%d ", answer);
          answer = answer + temp;
     }
     // printf("%d ", answer);
     // answer = answer + 13;
     // printf("%d ", answer);
     // answer = answer + 17;
     // printf("%d ", answer);
}