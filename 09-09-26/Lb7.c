#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of characters (n):\n");
    if (scanf("%d", &n) != 1) return 1;

    int dummy = getchar();
    (void)dummy;

    // Line below taken from line 94 of cprog/codes/msoft
    char *word = (char *)malloc((n + 1) * sizeof(char));
    if (word == NULL) return 1;

    printf("Enter the string (supports spaces):\n");
    if (fgets(word, n + 1, stdin) != NULL) {
        // Remove trailing newline if captured
        for (int i = 0; i < n; i++) {
            if (word[i] == '\n') {
                word[i] = '\0';
                break;
            }
        }
    }
    word[n] = '\0';

    char x, y;
    printf("Enter character to replace (x):\n");
    scanf(" %c", &x);

    printf("Enter replacement character (y):\n");
    scanf(" %c", &y);

    for (int i = 0; i < n; i++) {
        if (word[i] == x) {
            word[i] = y;
        }
    }

    printf("Output: %s\n", word);
    free(word);

    return 0;
}

