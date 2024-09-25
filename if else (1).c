#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;

    if (a > b && a > c) {
        printf("a is the greatest\n");
    } else if (b > a && b > c) {
        printf("b is the greatest\n");
    } else {
        printf("c is the greatest\n");
    }

    return 0;
}