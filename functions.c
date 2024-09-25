#include <stdio.h>

int add_numbers(int a, int b);

int main() {
    int result = add_numbers(5, 3);
    printf("Sum: %d\n", result);
    return 0;
}

int add_numbers(int a, int b) {
    return a + b;
}