#include <stdio.h>

int main() {
    char str[100];

    // Read user input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Swap the first two characters using a temporary variable
    char temp = str[0];
    str[0] = str[1];
    str[1] = temp;

    // Output the modified string
    printf("Modified string: %s\n", str);

    return 0;
}

