#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) (pow(x, 3) - 4 * x - 2) // Defining the function
#define e 0.001 // Defining the tolerance

int main() {
    float x0, x1, x2, f0, f1, f2;
    int i = 0;

    printf("Enter value of x0: ");
    scanf("%f", &x0);
    printf("Enter value of x1: ");
    scanf("%f", &x1);

    do {
        f0 = f(x0); 
        f1 = f(x1); 

        // Secant method formula
        x2 = ((x0 * f1) - (x1 * f0)) / (f1 - f0); 

        f2 = f(x2); 

        x0 = x1; 
        x1 = x2;

        i++;
        printf("Iteration %d\n", i);
        printf("Root = %f\n", x2);
        printf("Value at root = %f\n", f2);

    } while (fabs(f2) > e); 

    
}
