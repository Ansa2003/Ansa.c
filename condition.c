#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int max = (a > b) ? a : b;
    printf("Max of %d and %d is %d\n", a, b, max);
    return 0;
}