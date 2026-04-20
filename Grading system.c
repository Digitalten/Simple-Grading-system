#include <stdio.h>

int main() {
    float number = 0;

    do {
    printf("Please enter a number between 0 and 10:\n");
    scanf("%f", &number);

    if (number < 0 || number > 10) {
        printf("\nOps! Maybe you got it wrong!\n");
    }
    else if (number >= 5) {
        printf("\nCongrats, you passed!\n");
    }
    else {
        printf("\nWhat a shame, you did not pass.\nBut do not worry, you can always try again!\n\n");
    }
    } while (number < 0 || number > 10 || number < 5);
    
    return 0;
}
