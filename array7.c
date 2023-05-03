// Write a programe to print your name using ascii value 
#include<stdio.h>
void main()
{
     int name[5];
     name[0] = 80;
     name[1] = 97;
     name[2] = 114;
     name[3] = 97;
     name[4] = 109;
     printf("your name is %c%c%c%c%c ",name[0],name[1],name[2],name[3],name[4]);
}