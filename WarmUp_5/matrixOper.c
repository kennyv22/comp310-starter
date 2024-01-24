#include <stdio.h> 

void printMatrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for(int a = 0; a < columns; a++) {
            printf("%d ", matrix[i][a]);

        }

        printf("\n");
    }
}

int main () { 
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];
    int product[2][2]; 

    for (int i = 0; i < 2; i++) {
        for (int a = 0; a < 2; a++) {
            sum[i][a] = matrix1[i][a] + matrix2[i][a];
        }  
    }

    for (int i = 0; i < 2; i++) {
        for (int a = 0; a < 2; a++) {
            product[i][a] = 0;
            for (int k = 0; k < 2; k++) {
                product[i][a] += matrix1[i][k] * matrix2[k][a];
            }
        }
    }

    printf("Matrix Addition:\n");
    printMatrix(2, 2, sum);

    printf("\n");

    printf("Matrix Product:\n");
    printMatrix(2, 2, product);

    return 0;
}