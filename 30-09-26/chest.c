//Keerthana
//30-09-26
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "coeffs.h"

int main() {
    srand(time(NULL)); 
    
    int n; 
    printf("Enter n: "); 
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    // Generate n random values between 1 and 100 
    uniform("vector.dat", n);

    FILE *fp = fopen("vector.dat", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        double x;
        fscanf(fp, "%lf", &x);
        int val = (int)(x * 100.0) + 1;
        if (val > 100) val = 100;
        arr[i] = val;
    }
    fclose(fp);

    // Print the initial generated chest array
    printf("Generated Chest Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Use a pointer to find the chest with the fewest coins
    int *min_ptr = &arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min_ptr) {
            min_ptr = &arr[i];
        }
    }

    //  Set the cursed chest's coin count to 0 
    *min_ptr = 0;

    // Print the updated array
    printf("Updated Array (Cursed chest set to 0):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

