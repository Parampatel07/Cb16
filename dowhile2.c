// Write a programe to print a to z small alphabet
#include <stdio.h>
void main()
{
     int number = 65;
     do
     {
          printf("%c ", number);
          number = number + 1;
     } while (number <= 90);
}