#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt the user to enter the first integer
    printf("Enter first integer: ");
    scanf("%d", &num1);

    // Prompt the user to enter the second integer
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Calculate the sum of the two integers
    sum = num1 + num2;

    // Display the result
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}