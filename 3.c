/* 

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 */
#include <stdio.h>

int main() {
    int i, j;

    // Outer loop to iterate through rows (i represents the row number)
    for (i = 1; i <= 5; i++) {
        // Inner loop to iterate through columns in each row (j represents the column number)
        for (j = 1; j <= i; j++) {
            // Printing the current column number followed by a space
            printf("%d ", j);
        }
        // Moving to the next line after each row is printed
        printf("\n");
    }

    return 0;
}