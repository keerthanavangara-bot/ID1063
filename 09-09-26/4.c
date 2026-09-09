#include <stdio.h>


int findFirstIndex(char str[], char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i; // Return index when character is matched
        }
    }
    return -1; // Return -1 if character is not found
}

int main() {
    char str[100];
    char ch;

    // Read string input
    printf("Input: ");
    scanf("%s", str);

    // Read target character input
    printf("character: ");
    scanf(" %c", &ch);

    // Find and print the index
    int index = findFirstIndex(str, ch);
    printf("Output: %d\n", index);

    return 0;
}

