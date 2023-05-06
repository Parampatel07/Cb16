#include <stdio.h>
float printbmi(float bmi, float weight, float height)
{
    bmi = weight / (height * height);
    printf("Your BMI : %.2f ", bmi);
    if (bmi < 18.5)
    {
        printf("Underweight");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Normal weight");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Overweight");
    }
    else if (bmi >= 30 && bmi <= 35)
    {
        printf("Obese");
    }
    else if (bmi > 35)
    {
        printf("Morbid obesity");
    }
}

void main()
{
    float height = 0, weight = 0, bmi = 0;

    printf("Enter your weight (KG) : ");
    scanf("%f", &weight);
    printf("Enter your height (M) : ");
    scanf("%f", &height);
    printbmi(bmi, weight, height);
}