// Ackerman function 
#include <stdio.h>

unsigned int ackermann(unsigned int m, unsigned int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
    return 0; // This return is to avoid compiler warnings, as this point will never be reached
}

int main() {
    unsigned int m = 3;
    unsigned int n = 4;
    printf("Ackermann(%u, %u) = %u\n", m, n, ackermann(m, n));
    return 0;
}