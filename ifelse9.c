// Write a programe to findout whether the give alphabet is vowel or not 
//a,e,i,o,u
#include<stdio.h>
void main()
{
     char letter;

     printf("Enter letter ");
     scanf("%c",&letter);

     if(letter == 'a' || letter=='e' || letter=='o' || letter=='u' || letter=='i' || letter=='A' || letter=='E' || letter=='O' ||letter=='U' ||letter=='I')
     {
          printf("it is vowel ");
     }
     else
     {
          printf("it is consonent");
     }
     printf("\nGoodbyee...");
}