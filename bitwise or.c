#include <stdio.h>

int main() {
    int a = 12, b = 25; // 12 = 1100, 25 = 11001
    int result = a | b; // 1100 | 11001 = 11101
    printf("Bitwise OR: %d | %d = %d\n", a, b, result);
    return 0;
}