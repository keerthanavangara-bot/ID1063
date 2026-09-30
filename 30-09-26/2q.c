#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "coeffs.h"

void binaryMatrix(int n, int m)
{
    double x;

    // Generate n * m random numbers 
    uniform("minesweeper.dat", n * m);

    FILE *fp = fopen("minesweeper.dat", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    // Convert the random numbers into an n x m grid of 0s and 1s
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            fscanf(fp, "%lf", &x);

            if (x < 0.5)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }

    fclose(fp);
}

int main()
{
    
    srand(time(NULL));

    int n, m;
    printf("Enter rows (n): ");
    scanf("%d", &n);
    printf("Enter columns (m): ");
    scanf("%d", &m);

    binaryMatrix(n, m);

    return 0;
}

