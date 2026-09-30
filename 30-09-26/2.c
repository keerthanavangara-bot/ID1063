#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double **createMat(int m, int n) {
    double **a = (double **)malloc(m * sizeof(*a));
    for (int i = 0; i < m; i++)
        a[i] = (double *)malloc(n * sizeof(*a[i]));
    return a;
}

double **loadtxt(char *str, int m, int n) {
    FILE *fp = fopen(str, "r");
    double **a = createMat(m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            fscanf(fp, "%lf", &a[i][j]);
    fclose(fp);
    return a;
}

void print(double **p, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%.0lf ", p[i][j]);
        printf("\n");
    }
}

void uniform(char *str, int len) {
    FILE *fp = fopen(str, "w");
    for (int i = 0; i < len; i++)
        fprintf(fp, "%lf\n", (double)rand() / RAND_MAX);
    fclose(fp);
}

int main() {
    int n;
    printf("Enter matrix dimension n: ");
    if (scanf("%d", &n) != 1) return 1;

    // 1. Generate n*n random numbers and load into an n x n matrix
    uniform("uni.dat", n * n);
    double **raw = loadtxt("uni.dat", n, n);

    // 2. Convert raw values into binary 0s and 1s
    double **mat = createMat(n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = (raw[i][j] >= 0.5) ? 1.0 : 0.0;
        }
    }

    // 3. Print the n x n binary matrix
    printf("Binary Matrix (%dx%d):\n", n, n);
    print(mat, n, n);

    return 0;
}

