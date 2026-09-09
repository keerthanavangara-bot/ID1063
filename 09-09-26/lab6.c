#include <stdio.h>

int main() {
    int n;
    
    // Read total count of characters
    scanf("%d", &n);

    // Clear newline character from buffer
    getchar();

    char str[1000];

    // Read n characters including spaces
    for (int i = 0; i < n; i++) {
        str[i] = getchar();
    }

    // Add null character at end
    str[n] = '\0';

    // Print result
    printf("%s\n", str);

    return 0;
}

