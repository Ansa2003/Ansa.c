#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("You entered zero.\n");
        } else {
            printf("You entered a positive number.\n");
        }
    } else {
        printf("You entered a negative number.\n");
    }

    return 0;
}