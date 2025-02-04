/*
CH-230-A
a4_p9.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
#include <stdlib.h>
int prodminmax (int arr[], int n);
int main(){
    int n, *arr;
    scanf("%d", &n);
    arr = (int*) malloc(sizeof(int) * n);
    //size is allocated for n number of ints
    if (arr == NULL)
        exit(1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", prodminmax (arr, n));
    //the product is called and printed
    free (arr);
    return 0;
}
int prodminmax (int arr[], int n) {
    int small = arr[0];
    int big = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > big) {
            big = arr[i];
            //if current value is bigger, it becomes the big int
        } else if (arr[i] < small) {
            small = arr[i];
            //if it is smaller, it becomes the small int
        }
    }
    return big * small;
    //the product is returned
}*/
