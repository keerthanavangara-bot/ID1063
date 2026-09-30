#include <stdio.h>
#include <math.h>

int firstStable(double a[], int n, double tolerance) {
    for (int i = 0; i < n - 1; i++) {
        // Checking absolute difference between adjacent elements
        if (fabs(a[i + 1] - a[i]) <= tolerance) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Enter the number of readings (n): ");
    if (scanf("%d", &n) != 1) return 0;
    
    double a[1000];
    printf("Enter %d readings separated by spaces: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }
    
    double tolerance;
    printf("Enter the tolerance value: ");
    scanf("%lf", &tolerance);
    
    int result = firstStable(a, n, tolerance);
    printf("Result index: %d\n", result);
    
    return 0;
}

