#include <stdio.h>

int main() {
    int a = 10, b = 5;
    printf("Equal to: %d == %d = %d\n", a, b, a == b);
    printf("Not equal to: %d != %d = %d\n", a, b, a != b);
    printf("Greater than: %d > %d = %d\n", a, b, a > b);
    printf("Less than: %d < %d = %d\n", a, b, a < b);
    printf("Greater than or equal to: %d >= %d = %d\n", a, b, a >= b);
    printf("Less than or equal to: %d <= %d = %d\n", a, b, a <= b);
    return 0;
}