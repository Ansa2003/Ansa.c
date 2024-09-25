#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 5;
    printf("Fibonacci of %d is %d\n", num, fibonacci(num));
    return 0;
}