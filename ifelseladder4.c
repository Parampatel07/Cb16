// Write a programe to findout distance of planet from sun take planet as an  input from user 
// https://www.jpl.nasa.gov/edu/pdfs/scaless_reference.pdf
#include<stdio.h>
void main()
{
     int planet;

     printf("\nEnter 1 for mercury ");
     printf("\nEnter 2 for venus ");
     printf("\nEnter 3 for earth ");
     printf("\nEnter 4 for Mars ");
     printf("\nEnter 5 for Jupiter ");
     printf("\nEnter 6 for Saturn ");
     printf("\nEnter 7 for Uranus ");
     printf("\nEnter 8 for Neptune ");
     scanf("%d",&planet);

     if(planet==1)
     {
          printf("the distance from sun is 0.39 au");
     }
     else if(planet==2)
     {
          printf("the distance from sun is 0.72 au");
     }
     else if(planet==3)
     {
          printf("the distance from sun is 1 au");
     }
     else if(planet==4)
     {
          printf("the distance form sun is 1.52 au");
     }
     else if(planet==5)
     {
          printf("the distance form sun is 5.2 au");
     }
     else if(planet==6)
     {
          printf("the distance form sun is 9.54 au");
     }
     else if(planet==7)
     {
          printf("the distance form sun is 19.2 au");
     }
     else if(planet==8)
     {
          printf("the distance form sun is 30.06 au");
     }
     else
     {
          printf("Select planet from given list ");
     }
     printf("\nGoodbyee..");
}