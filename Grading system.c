#include <stdio.h>
int main(){

    float numero;
    printf("\n\nPlease enter a number between 0 and 10:\n");
    scanf("%f", &numero);
    if (numero < 0 || numero > 10) {
        printf("\nOps! Maybe you got it wrong!\n please enter a number between 0 and 10.");

    }

    else if (numero >= 5) {
        printf("\nCongrats, you passed!");
    }

    else {
        printf("\nWhat a shame, you did not pass.\nBut do not worry, you can always try again!\n");

    }

    return 0;

}