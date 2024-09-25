#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        printf("%d ", (int)pow(2, i));
    }

    printf("\n");

    return 0;
}