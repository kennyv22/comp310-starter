#include <stdio.h>

int main(int argc, char *argv[]) {
    double a, b;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Sum: %.2f\n", a + b);
    printf("Difference: %.2f\n", a - b);
    printf("Product: %.2f\n", a * b);
    printf("Quotient: %.2f\n", a / b);

    return 0;
}
