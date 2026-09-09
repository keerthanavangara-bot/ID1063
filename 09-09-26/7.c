#include <stdio.h>

int main() {
    char word[100];
    char x, y;

    printf("Enter word:\n");
    scanf("%s", word);

    printf("Enter character to replace (x):\n");
    scanf(" %c", &x);

    printf("Enter replacement character (y):\n");
    scanf(" %c", &y);

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == x) {
            word[i] = y;
        }
    }

    printf("Output: %s\n", word);

    return 0;
}

