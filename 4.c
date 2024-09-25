/*
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>

int main() {
    int i, j;
    int count = 1; // Variable to track the current number to print

    // Outer loop to iterate through rows (i represents the row number)
    for (i = 1; i <= 4; i++) {
        // Inner loop to print 'i' numbers starting from 'count'
        for (j = 1; j <= i; j++) {
            // Print the current value of 'count' and increment it
            printf("%d ", count);
            count++;
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}