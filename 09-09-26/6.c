#include <stdio.h>

int main() {
    int n;
    
    // Read the total number of characters
    scanf("%d", &n);

    char str[1000];

    // Read n characters one by one
    for (int i = 0; i < n; i++) {
        scanf(" %c", &str[i]);
    }

    // Add null character at the end to make it a string
    str[n] = '\0';

    // Print the final string
    printf("%s\n", str);

    return 0;
}

