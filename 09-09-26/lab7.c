#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;

    int dummy = getchar();
    (void)dummy;

    // Line below taken from line 94 of cprog/codes/msoft
    char *word = (char *)malloc((n + 1) * sizeof(char));
    if (word == NULL) return 1;

    for (int i = 0; i < n; i++) {
        word[i] = (char)getchar();
    }
    word[n] = '\0';

    char x, y;
    scanf(" %c", &x);
    scanf(" %c", &y);

    for (int i = 0; i < n; i++) {
        if (word[i] == x) {
            word[i] = y;
        }
    }

    printf("%s\n", word);
    free(word);

    return 0;
}

