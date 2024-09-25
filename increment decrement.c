#include <stdio.h>

int main() {
    int a = 10;
    printf("Initial value: %d\n", a);
    printf("Post-increment: %d\n", a++);
    printf("After post-increment: %d\n", a);
    printf("Pre-increment: %d\n", ++a);
    printf("After pre-increment: %d\n", a);
    printf("Post-decrement: %d\n", a--);
    printf("After post-decrement: %d\n", a);
    printf("Pre-decrement: %d\n", --a);
    printf("After pre-decrement: %d\n", a);
    return 0;
}