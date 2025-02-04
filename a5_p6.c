/*
CH-230-A
a5_p6.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    float array[n];
    for (int i = 0; i < n; i++) {
        scanf("%f", &array[i]);
    }
    //inputs values
    float *ptr = array;
    while (*ptr >= 0) {
        ptr++;
    }
    //values will be read until the first negative value is encountered
    printf("Before the first negative value: %ld elements\n", ptr - array);
    //prints the difference between the array length and the pointer's position
    return 0;
}*/
