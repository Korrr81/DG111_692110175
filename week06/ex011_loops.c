#include <stdio.h>
int main() {
    int i, sum;
    //วิธีที่ 1: For loop
    sum = 0;
    for (i = 1; i <= 10; i++) {
        sum += i;
    }
  printf("For loop sum: %d\n", sum);
  
    //วิธีที่ 2: While loop
    sum = 0;
    i = 1;
    while (i <= 10) {
        sum += i;
        i++;
    }
    printf("While loop sum: %d\n", sum);

    //วิธีที่ 3: Do while loop
    sum = 0;
    i = 1;
    do {
        sum += i;
        i++;
    } while (i <= 10);
    printf("Do while loop sum: %d\n", sum);

    return 0;
}