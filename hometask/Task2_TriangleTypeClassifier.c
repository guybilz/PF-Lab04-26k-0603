#include <stdio.h>

int main(){
    int side1,side2,side3;

    printf("Enter three sides:");
    scanf("%d %d %d",&side1,&side2,&side3);

    if ( ((side1+side2) > side3 ) && ((side1+side3) > side2) && ((side2+side3) > side1)) {
        if( (side1 == side2) && (side1 == side3) ){
            printf("Valid Triangle -> Type: Equilateral");
        } else if( (side1 == side2) || (side1 == side3) || (side2 == side3) ){
            printf("Valid Triangle -> Type: Isosceles");
        } else{
            printf("Valid Triangle -> Type: Scalene");
        }
    } else{
        printf("Invalid Triangle!");
    }
    return 0;

}