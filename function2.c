// with arguments without return value function
#include<stdio.h>
#include<stdlib.h>
void printline(int s,char sy)
{
     int count=0;
     printf("\n");
     for(count=0;count<s;count++)
     {
          printf("%c ",sy);
     }
     printf("\n");
}
void main()
{
     int size;
     char symbol;
     printf("Enter size of line ");
     scanf("%d", &size);
     fflush(stdin);
     printf("Enter symbol to be printed ");
     scanf("%c",&symbol);
     printf("Param patel");
     printline(size,symbol);
}