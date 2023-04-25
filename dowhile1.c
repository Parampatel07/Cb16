// Write a programe to print table of user given number
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
// ..... 5 x 10 = 50
#include <stdio.h>
void main()
{
     int table = 0, answer = 0, number = 1;
     printf("Enter table number ");
     scanf("%d", &table);
     // table = 5;
     do
     {
          answer = table * number;
          printf("\n%d x %d = %d",table,number,answer);
          number = number + 1;
     }while(number<=10);
     // answer = table * number;
     // printf("\n5 x 2 = %d", answer);
     // number = number + 1;
     // answer = table * number;
     // printf("\n5 x 3 = %d",answer);
     // number = number +1 ;
     // answer = table * number;
     // printf("\n5 x 4 = %d",answer);
}