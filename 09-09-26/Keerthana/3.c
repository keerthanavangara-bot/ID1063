#include <stdio.h>

// Function to swap the first two characters 
void swapFirstTwo(char str[]) {
    char temp = str[0];
    str[0] = str[1];
    str[1] = temp;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    // Call the swap function
    swapFirstTwo(str);

    printf("Modified string: %s\n", str);

    return 0;
}

