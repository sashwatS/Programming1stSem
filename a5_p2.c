/*
CH-230-A
a5_p2.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
void divby5(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i]/5;

    }
}
int main() {
    float array[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int n = 0;
    printf("Before:\n");
    for (int i = 0; i < 6; i++){
        printf("%.3f ", array[i]);
        n++;
        //the value of n corresponds to the size of the array
    }
    divby5(array, n);
    printf("\nAfter:\n");
    for (int i = 0; i < 6; i++){
        printf("%.3f ", array[i]);
        //the values are divided by 5
    }
    printf("\n");
    return 0;
}*/
