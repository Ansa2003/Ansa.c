#include <stdio.h>

int main() {
    int a = 12; // 12 = 0000000000001100 in 16-bit
    int result = ~a; // ~0000000000001100 = 1111111111110011 (in 2's complement, it's -13)
    printf("Bitwise NOT: ~%d = %d\n", a, result);
    return 0;
}