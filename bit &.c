#include <stdio.h>

int main() {
    int a = 12, b = 25; // 12 = 1100, 25 = 11001
    int result = a & b; // 1100 & 11001 = 1000
    printf("Bitwise AND: %d & %d = %d\n", a, b, result);
    return 0;
}