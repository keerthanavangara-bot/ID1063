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

    printf("Enter %d characters:\n", n);
    for (int i = 0; i < n; i++) {
        word[i] = (char)getchar();
    }
    word[n] = '\0';

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

