// Keerthana
// 30-09-26
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "coeffs.h"

void uniformVector(int n) {
    double x;

    // Generate n random numbers 
    uniform("vector.dat", n);

    FILE *fp = fopen("vector.dat", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    // Read and scale the random numbers to integers between 1 and 100
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%lf", &x);
        int val = (int)(x * 100.0) + 1;
        if (val > 100) val = 100; // Cap at 100 just in case
        printf("%d ", val);
    }
    printf("\n");

    fclose(fp);
}

int main() {
    srand(time(NULL)); 
    
    int n; 
    printf("Enter n: "); 
    scanf("%d", &n);

    uniformVector(n);

    return 0;
}

