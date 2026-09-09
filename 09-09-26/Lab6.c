#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    // Read total count of characters
    scanf("%d", &n);

    // Clear newline character from buffer
    getchar();

    // Allocate memory dynamically for n characters + 1 null character
    char *str = (char *)malloc((n + 1) * sizeof(char));
    if (str == NULL) {
        return 1;
    }

    // Read n characters including spaces
    for (int i = 0; i < n; i++) {
        str[i] = getchar();
    }

    // Add null character at end
    str[n] = '\0';

    // Print result
    printf("%s\n", str);

    // Free allocated memory
    free(str);

    return 0;
}

