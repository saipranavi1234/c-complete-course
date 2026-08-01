#include <stdio.h>

int main() {
    int secret = 7, guess;

    do {
        printf("Guess the number (1-10): ");
        scanf("%d", &guess);

        if(guess != secret)
            printf("Wrong! Try Again.\n");

    } while(guess != secret);

    printf("Correct! You guessed it.\n");

    return 0;
}