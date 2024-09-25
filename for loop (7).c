#include <stdio.h>

int main() {
    int base, exp, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    printf("%d raised to the power %d is %d\n", base, exp, result);
    return 0;
}