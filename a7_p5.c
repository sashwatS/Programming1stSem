/*
CH-230-A
a7_p5.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include <stdlib.h>
int cmp_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
    //compares the values in ascending order
}
int cmp_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
    //compares the values in descending order
}
int main() {
    int n, check = 0;
    char c;
    while (check == 0) {
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        scanf(" %c", &c);
        if (c == 'e') {
            break;
        } else if (c == 'a') {
            qsort(arr, n, sizeof(int), cmp_asc);
            //calls the qsort function from stdlib and performs ascending sort
        } else if (c == 'd') {
            qsort(arr, n, sizeof(int), cmp_desc);
            //calls the qsort function from stdlib and performs descending sort
        }
        for (int i = 0; i < n; i++) {
            printf("%d", arr[i]);
            if (i < n - 1)
            {
                printf(" ");
            }
        }
        printf(" \n");
    }
    return 0;
}*/
