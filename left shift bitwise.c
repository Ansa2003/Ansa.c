#include <stdio.h>

int main() {
    int a = 12; // 12 = 1100
    int result = a << 2; // 1100 << 2 = 110000 (48 in decimal)
    printf("Left Shift: %d << 2 = %d\n", a, result);
    return 0;
}