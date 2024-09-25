#include <stdio.h>
#include <math.h>

int main() {
    double num, result;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Error: Cannot find the square root of a negative number.\n");
    } else {
        // Calculate the square root
        result = sqrt(num);

        // Display the result
        printf("Square root of %.2lf is %.2lf\n", num, result);
    }

    return 0;
}