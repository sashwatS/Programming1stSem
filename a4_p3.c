/*
CH-230-A
a4_p3.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
#include <math.h>
float geometric_mean (float arr[], int num);
float highestNumber (float arr[], int num);
float smallestNumber (float arr[], int num);
float sum (float arr[], int num);
int main() {
    float array[15], input, n = 0;
    for (int i = 0; i < 15; i++) {
        scanf("%f", &input);
        getchar();
        //takes input
        if (input < 0) {
            break;
            //loop stops if number is invalid
        } else {
            array[i] = input;
            n++;
            //number is added to array after validity check
        }
    }
    char c;
    scanf("%c", &c);
    switch (c) {
        case 'm':
            printf("geometric mean: %f", geometric_mean(array, n));
            break;
        case 'h':
            printf("highest number: %f", highestNumber(array, n));
            break;
        case 'l':
            printf("smallest number: %f", smallestNumber(array, n));
            break;
        case 's':
            printf("sum: %f", sum(array, n));
    }
    //each case returns a function's output based on input
    return 0;
}
float geometric_mean (float arr[], int num) {
    float product = 1;
    for (int i = 0; i < num; i++) {
        product *= arr[i];
    }
    return pow(product, 1.0/num);
    //returns geometric mean by taking the product to the power of 1/num
}
float highestNumber (float arr[], int num) {
    float highest = arr[0];
    for (int i = 1; i < num; i++) {
        if (arr[i] > highest){
            //starts from position 1 to avoid unnecessary comparison
            highest = arr[i];
        }
    }
    return highest;
    //returns highest value
}
float smallestNumber (float arr[], int num) {
    float smallest = arr[0];
    for (int i = 1; i < num; i++) {
        if (arr[i] < smallest) {
            //starts from position 1 to avoid unnecessary comparison
            smallest = arr[i];
        }
    }
    return smallest;
    //returns the smallest value
}
float sum (float arr[], int num) {
    float sum = 0;
    for (int i = 0; i < num; i++) {
        sum += arr[i];
    }
    return sum;
    //returns the sun
}*/