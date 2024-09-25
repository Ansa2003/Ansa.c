#include <stdio.h>
#include <string.h>

int main() {
    char src[100], dest[100];
    printf("Enter a string to copy: ");
    fgets(src, sizeof(src), stdin);
    src[strcspn(src, "\n")] = '\0'; // Remove the newline character
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}