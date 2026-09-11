#include <stdio.h>

int main(){
    const int dailylimit = 25000 ;
    long balance;
    int withdrawalamount;

    printf("Enter Balance:");
    scanf("%ld", &balance);
    printf("Enter withdrawal amount:");
    scanf("%d", &withdrawalamount);

    if ((withdrawalamount%500 == 0) && (withdrawalamount <= balance) && (withdrawalamount <= dailylimit)){
        balance = balance - withdrawalamount ;
        printf("Withdrawal Successful. Remaining Balance: %ld", balance);
    } else if (withdrawalamount%500 != 0){
        printf("Withdrawal unsuccessful. Withdrawal amount should be a multiple of 500.");
    } else if(withdrawalamount > balance){
        printf("Withdrawal unsuccessful. Insufficient Balance.");
    } else if (withdrawalamount > dailylimit){
        printf("Withdrawal unsuccessful. Withdrawal amount exceeded daily limit.");
    }
    return 0;
}