#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int max;

    // Using the conditional operator
    max = (a > b) ? a : b;

    printf("The maximum value is: %d\n", max);

    return 0;
}