#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Using fgets for safer input
    str[strcspn(str, "\n")] = '\0'; // Remove the newline character
    printf("Length of the string is: %lu\n", strlen(str));
    return 0;
}