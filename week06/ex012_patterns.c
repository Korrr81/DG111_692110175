#include <stdio.h>
int main() 
{
    int i, j;
    // Triangle pattern
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Square pattern
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Diamond pattern
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2; i >= 1; i--) {
        for (j = 1; j <= 3 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
            }
            printf("\n");
        }

    return 0;
}
