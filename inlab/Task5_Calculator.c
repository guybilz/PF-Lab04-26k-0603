#include <stdio.h>
int main(){
    float num1,num2,sum,diff,product;
    float div;
    char operator;

    printf("Enter first number:");
    scanf("%f",&num1);

    printf("Enter operator(+ - * /):");
    scanf(" %c",&operator);

    printf("Enter second number:");
    scanf("%f",&num2);

    switch (operator){
        case '+':
            sum = num1 + num2;
            printf("%.2f",sum);
            break;
        case '-':
            diff = num1 - num2;
            printf("%.2f",diff);
            break;
        case '*':
            product = num1*num2;
            printf("%.2f",product);
            break;
        case '/':
            if (num2 == 0){
                printf("Error: division by zero is not allowed");
            } else{
                div = num1/num2;
                printf("%.2f",div);
            }
            break;
        default:
            printf("Invalid operator!");

    }
    return 0;
}