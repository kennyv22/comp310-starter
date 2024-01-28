#include <stdio.h>

int main(int argc, char argv []) {
    int num, i;
    double factorial = 1;

    printf("Enter positive number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Can't take factorial for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %f\n", num, factorial);
    }
    return 0;
}
