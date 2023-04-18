// Write a programe to find out wether the user given alphabet is vowel or not
// a,e,i,o,u
#include <stdio.h>
void main()
{
     char letter;

     printf("Enter any letter ");
     scanf("%c", &letter);

     switch (letter)
     {
     case 'a':
          printf("it is vowel ");
          break;

     case 'e':
          printf("it is vowel ");
          break;

     case 'i':
          printf("it is vowel ");
          break;

     case 'o':
          printf("it is vowel");
          break;

     case 'u':
          printf("it is vowel ");
          break;

     case 'A':
          printf("it is vowel ");
          break;

     case 'E':
          printf("it is vowel ");
          break;

     case 'I':
          printf("it is vowel ");
          break;

     case 'O':
          printf("it is vowel ");
          break;

     case 'U':
          printf("it is vowel ");
          break;
          
     default:
          printf("it is consonent ");
          break;
     }
     printf("\nGoodbyee...");
}