#include <stdio.h>
#include <math.h>


int main(){
    float weight , height ;
    double bmi;

    printf("Enter Weight (Kg):");
    scanf("%f", &weight);
    printf("Enter hHight (m):");
    scanf("%f", &height);

    bmi = (weight/(pow(height,2)));
    if (bmi < 18.5){
        printf("BMI = %.2f -> Category: Underweight",bmi);
    } else if(bmi >= 18.5 && bmi <= 24.9){
        printf("BMI = %.2f -> Category: Normal",bmi);
    } else if(bmi >= 25 && bmi <= 29.9){
        printf("BMI = %.2f -> Category: Overweight",bmi);
    }  else if (bmi >= 30){
        printf("BMI = %.2f -> Category: Obese",bmi);
    }

    return 0;


}