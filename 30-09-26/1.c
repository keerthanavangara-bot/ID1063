#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double **createMat(int m, int n) {
    double **a = (double **)malloc(m * sizeof(*a));
    for (int i = 0; i < m; i++)
        a[i] = (double *)malloc(n * sizeof(*a[i]));
    return a;
}

double **transposeMat(double **a, int m, int n) {
    double **c = createMat(n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = a[j][i];
        }
    }
    return c;
}

double **Matmul(double **a, double **b, int m, int n, int p) {
    double **c = createMat(m, p);
    for (int i = 0; i < m; i++) {
        for (int k = 0; k < p; k++) {
            double temp = 0;
            for (int j = 0; j < n; j++) {
                temp += a[i][j] * b[j][k];
            }
            c[i][k] = temp;
        }
    }
    return c;
}

double Matdot(double **a, double **b, int m) {
    double **temp = Matmul(transposeMat(a, m, 1), b, 1, m, 1);
    return temp[0][0];
}

double **Matrow(double **a, int m, int n) {
    double **b = createMat(n, 1);
    for (int i = 0; i < n; i++) {
        b[i][0] = a[m][i];
    }
    return b;
}

double **Matcol(double **a, int m, int n) {
    double **b = createMat(m, 1);
    for (int i = 0; i < m; i++) {
        b[i][0] = a[i][n];
    }
    return b;
}

double productEntry(double **A, double **B, int row, int col, int common) {
    double **rVec = Matrow(A, row, common);
    double **cVec = Matcol(B, common, col);
    double ans = Matdot(rVec, cVec, common);
    return ans;
}

int main() {
    int r1, c1, r2, c2;

    scanf("%d %d", &r1, &c1);
    double **A = createMat(r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);
    double **B = createMat(r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%lf", &B[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            double entry = productEntry(A, B, i, j, c1);
            printf("%lf", entry);
            if (j < c2 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

