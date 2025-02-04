/*
CH-230-A
a5_p8.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include <stdlib.h>
int **allocateMatrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL)
        exit(1);
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL)
            exit(1);
    }
    return matrix;
    //allocates space for a matrix (2d array)
}

void readMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    //takes inputs for the matrix
}

void print(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    //prints the matrix seperated by rows and columns
}

int **multiply(int **matrixA, int **matrixB, int n, int m, int p) {
    int **product = allocateMatrix(n, p);
    //the product pointer forms a matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            product[i][j] = 0;
            for (int k = 0; k < m; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return product;
    //performs matrix multiplication
}

void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    //frees the memory of a 2d matrix
}

int main() {
    int n, m, p;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    int **matrixA = allocateMatrix(n, m);
    int **matrixB = allocateMatrix(m, p);
    //forms matrices
    readMatrix(matrixA,n, m);
    readMatrix(matrixB, m, p);
    //takes inputs
    printf("Matrix A:\n");
    print(matrixA, n, m);
    printf("Matrix B:\n");
    print(matrixB, m, p);
    //prints the inputted matrices
    int **product = multiply(matrixA, matrixB, n, m, p);
    printf("The multiplication result AxB:\n");
    print(product, n, p);
    //performs matrix multiplication
    freeMatrix(matrixA, n);
    freeMatrix(matrixB, m);
    freeMatrix(product, n);
    //the memory is freed
    return 0;
}*/
