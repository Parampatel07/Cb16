// Write a programe to print following pattern
// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000
// 1  4  7   10  13  16  19  21  24  27  30 33 36
#include <stdio.h>
void main()
{
     int number = 1, answer, temp = 4;

     printf("%d ", number);
     answer = number + temp;
     
     for(temp=4 ; answer < 3000 ; answer = answer + temp )
     {
          printf("%d ", answer);
          temp = temp + 3;
     }
     // printf("%d ",answer);
     // temp = temp +3;//10
     // answer = answer + temp;
     // printf("%d ",answer);
     // temp = temp +3;//13
     // answer = answer +temp;
     // printf("%d ",answer);
     // temp = temp +3;//16
     // answer = answer + temp;
     // printf("%d ",answer);
}