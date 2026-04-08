#include <stdio.h>
int main(){
    int safe = 100;
    int userInput;
    printf("Before:\n");
    printf("safe = %d\n", safe);
    printf("\nEnter a number between 0 and 200: ");
    scanf("%",&userInput);
    if (userInput >=0 && userInput <=200){
        safe = userInput;
    }
    else{
        printf("invalid input!value will not change.\n");
}
     printf("\nAfter:\n");
     printf("safe = %d\n", safe);
     return 0;
}
