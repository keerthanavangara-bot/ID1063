#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h" 

int main() {
    int n, m;

    printf("Enter rows (n) and columns (m): ");
    if (scanf("%d %d", &n, &m) != 2) return 1;

    int total_elements = n * m;

    // Generate uniform random numbers 
    uniform("uni.dat", total_elements);

    // 2. Load the numbers into a matrix using loadtxt()
    double **rawMat = loadtxt("uni.dat", n, m);

    // 3. Create the board matrix and convert float values to random binary 0 or 1
    double **board = createMat(n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            board[i][j] = (rawMat[i][j] >= 0.5) ? 1.0 : 0.0;
        }
    }

    printf("\nRandom Matrix with 0 and 1:\n");
    print(board, n, m);

    return 0;
}

