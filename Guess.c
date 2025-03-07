#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 0;


    srand(time(0));
    target = rand() % 100 + 1;
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it!\n");

    do {
        printf("Enter your guess (1-100): ");


        if (scanf("%d", &guess) != 1) {
            printf("Invalid input! Please enter a number between 1 and 100.\n");
            while (getchar() != '\n');
            continue;
        }


        if (guess < 1 || guess > 100) {
            printf("Out of range! Please enter a number between 1 and 100.\n");
            continue;
        }

        attempts++;

        if (guess > target) {
            printf("Too high. Try again!\n");
        } else if (guess < target) {
            printf("Too low. Try again!\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != target);

    return 0;
}



