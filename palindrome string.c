#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]);

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    if (is_palindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    return 0;
}

int is_palindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}