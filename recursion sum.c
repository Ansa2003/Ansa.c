#include <stdio.h>

int sum_of_digits(int n) {
    if (n == 0)
        return 0;
    else
        return n % 10 + sum_of_digits(n / 10);
}

int main() {
    int num = 1234;
    printf("Sum of digits of %d is %d\n", num, sum_of_digits(num));
    return 0;
}