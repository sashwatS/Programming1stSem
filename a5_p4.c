/*
CH-230-A
a5_p4.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include <stdlib.h>
void divby5(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i]/5;
        //divides elements by five
    }
}
int main() {
    int n;
    scanf("%d", &n);
    //asks for the number of values
    float* array = (float*) malloc(sizeof(float) * n);
    if (array == NULL)
        exit(1);
    //allocates space
    for (int i = 0; i < n; i++) {
        scanf("%f", &array[i]);
        //inputs elements
    }
    printf("Before:\n");
    for (int i = 0; i < n; i++){
        printf("%.3f ", array[i]);
    }
    divby5(array, n);
    printf("\nAfter:\n");
    for (int i = 0; i < n; i++){
        printf("%.3f ", array[i]);
    }
    //function is called and the elements are printed
    free(array);
    //frees space
    return 0;
}*/
