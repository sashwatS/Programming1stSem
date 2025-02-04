/*
CH-230-A
a7_p6.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
struct person {
    char name[30];
    int age;
};
int nameCompare(const struct person *a, const struct person *b) {
    int nameComparison = strcmp(a->name, b->name);
    if (nameComparison == 0)
        return a->age - b->age;
        //sorts by alphabets if name is identical
    return nameComparison;
}
int ageCompare(const struct person *a, const struct person *b) {
    if (a->age == b->age)
        return strcmp(a->name, b->name);
        //sorts by age if names are identical
    return a->age - b->age;
}
void bubbleSort(struct person arr[], int n, int (*compares)(const struct person *, const struct person *)) {
    bool swapped;
    struct person temp;
    do {
        swapped = false;
        for (int i = 1; i < n; i++) {
            if (compares(&arr[i - 1], &arr[i]) > 0) {
                temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}
int main() {
    int n;
    scanf("%d", &n);
    struct person arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i].name);
        scanf("%d", &arr[i].age);
    }
    bubbleSort(arr, n, nameCompare);
    //calls the name function inside the bubble sort function
    for (int i = 0; i < n; i++) {
        printf("{%s, %d}; ", arr[i].name, arr[i].age);
    }
    printf("\n");
    bubbleSort(arr, n, ageCompare);
    //calls the age function inside the bubble sort function
    for (int i = 0; i < n; i++) {
        printf("{%s, %d}; ", arr[i].name, arr[i].age);
    }
    printf("\n");
    return 0;
}*/
