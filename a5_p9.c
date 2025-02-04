/*
CH-230-A
a5_p9.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include <stdlib.h>
void readArray(int ***matrix, int x, int y, int z) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                scanf("%d", &matrix[i][j][k]);
                //takes inputs after 3 nested loops
            }
        }
    }
}
void print_2D(int ***arr, int x, int y, int z) {
    for (int k = 0; k < z; k++) {
        printf("Section %d:\n", k + 1);
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        //printf("\n");
        //printing only 2 \ns ensures only 2d values are printed
    }
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    //takes dimensions
    int ***matrix = (int ***)malloc(x * sizeof(int ***));
    if (matrix == NULL)
        exit(1);
    //allocates memory for 3d array
    for (int i = 0; i < x; i++) {
        matrix[i] = (int **)malloc(y * sizeof(int *));
        if (matrix[i] == NULL)
            exit(1);
        //allocates memory for 2d array
        for (int j = 0; j < y; j++) {
            matrix[i][j] = (int *)malloc(z * sizeof(int));
            if (matrix[i][j] == NULL)
                exit(1);
            //allocates memory for 3d array
        }
    }
    readArray(matrix, x, y, z);
    print_2D(matrix, x, y, z);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            free(matrix[i][j]);
        }
        free(matrix[i]);
    }
    free(matrix);
    // Free the allocated memory
    return 0;
}*/
