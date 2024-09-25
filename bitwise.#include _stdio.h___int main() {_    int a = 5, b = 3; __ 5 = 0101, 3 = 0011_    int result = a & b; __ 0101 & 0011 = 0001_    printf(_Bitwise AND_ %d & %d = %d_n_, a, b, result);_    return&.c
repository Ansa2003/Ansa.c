#include <stdio.h>

int main() {
    int a = 5, b = 3; // 5 = 0101, 3 = 0011
    int result = a & b; // 0101 & 0011 = 0001
    printf("Bitwise AND: %d & %d = %d\n", a, b, result);
    return 0