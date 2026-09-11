#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    char lowered;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (!isalpha(ch)){
        printf("Error! Invalid input.");
        
    } else{
        lowered = tolower(ch); 
        switch(lowered){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a vowel.",ch);
                break;
            default:
                printf("%c is a consonant.", ch);
                break;
        }
    }
    
    return 0;
    
}