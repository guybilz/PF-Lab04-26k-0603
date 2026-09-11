#include <stdio.h>

int main(){
    int units, bill;

    printf("Enter units consumed:");
    scanf("%d", &units);
    bill = 0 ;
    if (units <= 100){
        bill = units*5;
    } else if((units > 100) && (units<=200)){
        bill = 100 * 5;
        units = units - 100;
        bill = bill + (units*8);
    } else if((units > 200) && (units<=400)){
        bill = 100 * 5;
        bill = bill + (100*8);
        units = units - 200;
        bill = bill + (units*12);
    } else if (units>400){
        bill = 100 * 5;
        bill = bill + (100*8);
        bill = bill + (200*12);
        units = units - 400;
        bill = bill + (units*15);
    }
    
    printf("Total bill: RS. %d", bill);
    return 0;
}