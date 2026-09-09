#include <stdio.h>

// Function to find the first occurrence index of a character
int findFirstIndex(char str[], char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i; // Return zero-based index on match
        }
    }
    return -1; // Return -1 if target character is not found
}

int main() {
    char str[100];
    char ch;

    // Read input string
    printf("Input: ");
    scanf("%s", str);

    // Read target character
    printf("character: ");
    scanf(" %c", &ch);

    // Find and output the index
    int index = findFirstIndex(str, ch);
    printf("Output: %d\n", index);

    return 0;
}

