#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Inner loop to print numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}