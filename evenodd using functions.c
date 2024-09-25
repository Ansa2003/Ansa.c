#include <stdio.h>

const char* check_even_odd(int number);

int main() {
    const char* result = check_even_odd(7);
    printf("The number is: %s\n", result);
    return 0;
}

const char* check_even_odd(int number) {
    if (number % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}