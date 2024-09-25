#include <stdio.h>

int main() {
    int a = 12, b = 25; // 12 = 1100, 25 = 11001
    a |= b; // a = a | b -> 1100 | 11001 = 11101
    printf("Bitwise OR with Assignment: %d\n", a);
    return 0;
}