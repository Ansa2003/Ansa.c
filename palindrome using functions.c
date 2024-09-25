#include <stdio.h>
#include <string.h>

int is_palindrome(const char* s);

int main() {
    const char* word = "radar";
    int result = is_palindrome(word);
    printf("Is palindrome: %s\n", result ? "Yes" : "No");
    return 0;
}

int is_palindrome(const char* s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}