#include <stdio.h>
#include <math.h>

int is_armstrong(int number);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (is_armstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

int is_armstrong(int number) {
    int original_number, remainder, result = 0, n = 0;

    original_number = number;

    // Find the number of digits in the number
    while (original_number != 0) {
        original_number /= 10;
        n++;
    }

    original_number = number;

    // Calculate the sum of the digits each raised to the power of n
    while (original_number != 0) {
        remainder = original_number % 10;
        result += pow(remainder, n);
        original_number /= 10;
    }

    // Check if the result is equal to the original number
    return (result == number);
}