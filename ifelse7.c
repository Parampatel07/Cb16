//write a program to accept one letter from user. if letter is (a) then print message "it is first letter of abcd" "it is not first of abcd" if not a .
#include<stdio.h>
void main()
{
     char letter;

     printf("Enter letter ");
     scanf("%c",&letter);

     if(letter == 'a' || letter=='A')
     {
          printf("it is first letter of abcd ");
     }
     else
     {
          printf("it is not first letter of abcd ");
     }
     printf("\nGoodbyee..");
}