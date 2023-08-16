#include "main.h"
#include <stdio.h>

int main() {
    int a = 1, b = 2;
    int count = 2; // Count starts from 2 because we already have the first two Fibonacci numbers (1 and 2)

    printf("%d, %d, ", a, b);

    while (count < 98) {
        int next = a + b;
        printf("%d", next);

        // Add the comma and space unless it's the last number
        if (count < 97) {
            printf(", ");
        } else {
            printf("\n");
        }

        a = b;
        b = next;
        count++;
    }

    return 0;
}

