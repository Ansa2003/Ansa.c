#include <stdio.h>

int string_length(char str[]);

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Note: gets is unsafe; use fgets in real applications
    printf("Length of the string is: %d\n", string_length(str));
    return 0;
}

int string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}