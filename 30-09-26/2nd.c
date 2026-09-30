#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "coeffs.h"

int main() {
    srand(time(NULL));
    int n, m;
    printf("Enter rows (n) and columns (m): ");
    if (scanf("%d %d", &n, &m) != 2) return 1;

    // Generate and read test matrix
    uniform("bin.dat", n * m);
    FILE *fp = fopen("bin.dat", "r");
    
    int board[n][m];
    printf("\nTest Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            double x;
            fscanf(fp, "%lf", &x);
            board[i][j] = (x < 0.5) ? 0 : 1;
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    fclose(fp);

    // Compute and print Minesweeper output
    printf("\nMinesweeper Output:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 1) {
                printf("-1 ");
            } else {
                int count = 0;
                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        int ni = i + di, nj = j + dj;
                        if (ni >= 0 && ni < n && nj >= 0 && nj < m && board[ni][nj] == 1)
                            count++;
                    }
                }
                printf("%d ", count);
            }
        }
        printf("\n");
    }
    return 0;
}

