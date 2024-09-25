#include <stdio.h>

int main() {
    int a, b;
    a = (b = 10, b + 5);
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    return 0;
}