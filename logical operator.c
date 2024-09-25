#include <stdio.h>

int main() {
    int a = 1, b = 0;
    printf("Logical AND: %d && %d = %d\n", a, b, a && b);
    printf("Logical OR: %d || %d = %d\n", a, b, a || b);
    printf("Logical NOT: !%d = %d\n", a, !a);
    return 0;
}