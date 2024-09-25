#include <stdio.h>

int main() {
    int a = 5, b = 3;
    printf("Bitwise AND: %d & %d = %d\n", a, b, a & b);
    printf("Bitwise OR: %d | %d = %d\n", a, b, a | b);
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, a ^ b);
    printf("Bitwise NOT: ~%d = %d\n", a, ~a);
    printf("Left Shift: %d << 1 = %d\n", a, a << 1);
    printf("Right Shift: %d >> 1 = %d\n", a, a >> 1);
    return 0;
}