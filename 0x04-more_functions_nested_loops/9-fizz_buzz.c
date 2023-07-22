#include <stdio.h>
/**
 * main - entry point
 * printFizzBuzz - print fuzz
 * Return:al
 */

void printFizzBuzz();

int main() {
    printFizzBuzz();

    return 0;
}

void printFizzBuzz() {
    int i;

    for (i = 1; i <= 100; i++) {
        if ((i % 3 == 0) && (i % 5 == 0)) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");
}

