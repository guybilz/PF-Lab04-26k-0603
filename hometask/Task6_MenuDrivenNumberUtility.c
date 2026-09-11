#include <stdio.h>
#include <math.h>
int main(){
    int choice;
    int number;

    do{
        printf("1.Check Even/Odd 2.Check Prime 3.Find Square 4. Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        if (choice != 4){
            printf("Enter a number:");
            scanf("%d", &number);
        }
        
        switch(choice){
            case 1:
                if (number%2 == 0){
                    printf("%d is even.\n", number);
                } else{
                    printf("%d is odd.\n", number);
                }
                break;
            
            case 2:
                if (number <= 1){
                    printf("%d is not a prime number.\n", number);
                    break;
                } else{

                    int count = 2;
                    int isprime = 1;
                    while (count <= pow(number,0.5)){
                        if (number%count == 0){
                            isprime = 0;
                            break;
                        } else{
                            count = count + 1 ;
                        }
                    }
                    if (isprime == 1){
                        printf("%d is a prime number.\n", number);
                    } else{
                        printf("%d is not a prime number.\n", number);
                    }

                }   
                break;

            case 3:
                printf("Square of %d is %d\n",number, (number*number));
                break;
                
            case 4:
                break;
            
            default:
                printf("Invalid input.\n");
                break;
        }
    } while(choice != 4);
    return 0;

}