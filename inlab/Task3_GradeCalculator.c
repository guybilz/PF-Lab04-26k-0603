#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    
    if (marks<=100 && marks>=0){
        if (marks>=85){
            printf("Grade: A");
        } else if (marks>=70){
            printf("Grade: B");
        } else if (marks>=60){
            printf("Grade: C");
        } else if (marks>=50){
            printf("Grade: D");
        } else{
            printf("Grade: F");
        }
    } else{
        printf("invalid input");
    }
    return 0;
}