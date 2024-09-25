/* 
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
     */
#include <stdio.h>

int main() {
    int i, j;

    // Outer loop to iterate through rows (i represents the row number)
    for (i = 1; i <= 5; i++) {
        // Inner loop to print the current row number 'i' times
        for (j = 1; j <= i; j++) {
            // Print the current value of 'i'
            printf("%d ", i);
        }
        // Move to the next line after printing each row
        printf("\n");
    }
}
