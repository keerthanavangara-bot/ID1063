#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    int isPalindrome = 1; // 1 means true, 0 means false

    // Read input string
    scanf("%s", str);

    // Task 1: Find the length of the string
    while (str[len] != '\0') {
        len++;
    }

    // Task 2: Check Palindrome condition
    // Loop only needs to run up to len / 2
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

