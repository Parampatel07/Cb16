// Write a programe to find bmi using function and also give cateogry
// https://www.builtlean.com/wp-content/uploads/2013/06/Bmi-chart-1.jpg
#include <stdio.h>
float foot_to_meter(int foot)
{
     float answer;
     answer = foot / 3.281;
     return answer;
}
float inch_to_meter(int inch)
{
     float answer;
     answer = inch / 39.37;
     return answer;
}
float total_meter(float foot_meter, float inch_meter)
{
     return foot_meter + inch_meter;
}
float getBmi(float weight, float height)
{
     return weight / (height * height);
}
void getCategory(float bmi)
{
     if (bmi < 18.5)
     {
          printf("\nYou are underweight ");
     }
     else if (bmi >= 18.5 && bmi <= 24.9)
     {
          printf("\nYou are healthy");
     }
     else if (bmi >= 25 && bmi <= 29.9)
     {
          printf("\nYou are overweight ");
     }
     else if (bmi >= 30 && bmi <= 39.9)
     {
          printf("\nYou are Obese");
     }
     else
     {
          printf("\n You are extremly Obese ");
     }
}
void main()
{
     int foot, inch;
     float weight, foot_meter, inch_meter, height, bmi;
     printf("Enter value of foot ");
     scanf("%d", &foot);
     printf("Enter value of inch ");
     scanf("%d", &inch);
     printf("Enter value of weight ");
     scanf("%f", &weight);
     foot_meter = foot_to_meter(foot);
     // printf("\nthe value of foot_meter is %f ", foot_meter);
     inch_meter = inch_to_meter(inch);
     // printf("\nthe value of inch_meter is %f ", inch_meter);
     height = total_meter(foot_meter, inch_meter);
     // printf("\nthe value of height is %f ", height);
     bmi = getBmi(weight, height);
     printf("\nthe value of bmi is %f ", bmi);
     getCategory(bmi);
}