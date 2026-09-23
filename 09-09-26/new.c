#include <stdio.h>
#include <math.h>

// Function: f(x) = e^x - 2
double f(double x) {
    return exp(x) - 2.0;
}

// Derivative: f'(x) = e^x
double df(double x) {
    return exp(x);
}

int main() {
    double x0 = 1.0;          // Initial guess
    double tolerance = 1e-6;  // Convergence threshold
    int max_iterations = 20;
    
    double x_current = x0;
    double x_next;
    
    printf("Newton-Raphson Iteration Step: x_{n+1} = x_n - (e^{x_n} - 2) / e^{x_n}\n\n");
    printf("%-10s %-15s %-15s %-15s %-15s\n", "Iter", "x_n", "f(x_n)", "f'(x_n)", "x_{n+1}");
    printf("-------------------------------------------------------------------\n");
    
    for (int i = 1; i <= max_iterations; i++) {
        double fx = f(x_current);
        double dfx = df(x_current);
        
        // Newton-Raphson update step
        x_next = x_current - (fx / dfx);
        
        printf("%-10d %-15.6f %-15.6f %-15.6f %-15.6f\n", i, x_current, fx, dfx, x_next);
        
        if (fabs(x_next - x_current) < tolerance) {
            printf("-------------------------------------------------------------------\n");
            printf("Root found: %.6f\n", x_next);
            printf("Rounded to 2 decimal places: %.2f\n", x_next);
            return 0;
        }
        
        x_current = x_next;
    }
    
    printf("Did not converge in %d iterations.\n", max_iterations);
    return 0;
}

