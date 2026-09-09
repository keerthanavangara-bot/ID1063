#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    int isPalindrome = 1;

    // Reads the whole line including spaces until Enter (\n) is pressed
    scanf(" %[^\n]s", str);

    // Task 1: Find length of string
    while (str[len] != '\0') {
        len++;
    }

    // Task 2: Check Palindrome condition
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output result
    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}

