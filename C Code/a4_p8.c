/*
CH-230-A
a4_p8.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
void printArray (int arr[30][30], int n);
void secondDiagonal(int arr[30][30], int n);
int main() {
    int arr[30][30], n;
    scanf("%d", &n);
    //specifies size
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            //takes inputs according to row and column
        }
    }
    printArray(arr, n);
    secondDiagonal(arr, n);
    //functions are called
    return 0;
}
void printArray (int arr[30][30], int n) {
    printf("The entered matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
            //a nested loops prints out the array in order
        }
        printf("\n");
        //newline arranges the elements by row
    }
}
void secondDiagonal(int arr[30][30], int n) {
    printf("Under the secondary diagonal:\n");
    for (int i = 1; i < n; i++) {
        for (int j = n - i; j < n; j++) {
            printf("%d ", arr[i][j]);
            //prints j in accordance with i, ensuring only under-diagonals are printed
        }
    }
    printf("\n");
}*/
