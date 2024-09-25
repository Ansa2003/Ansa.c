#include <stdio.h>

void string_reverse(char str[]);

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    string_reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

void string_reverse(char str[]) {
    int start = 0, end = 0;
    char temp;
    while (str[end] != '\0') end++;
    end--; // set to the last character
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}