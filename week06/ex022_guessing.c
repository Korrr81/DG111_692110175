#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main() {
    int target, guess, attempts = 0;
    srand(time(NULL)); // Seed the random number generator
    target = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("=== Number Guessing Game (1-100)===\n"); 
    printf("Enter your guess: ");
    do {
        scanf("%d", &guess);
        attempts++;

        if (guess < target) {
            printf("Too low! Try again: ");
        } else if (guess > target) {
            printf("Too high! Try again: ");
        } else {
            printf("Correct! You guessed it : %d in %d attempts.\n", target, attempts);
        }
    } while (guess != target);

    return 0;
}