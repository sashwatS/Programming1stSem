/*
CH-230-A
a3_p8.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
float sum(float arr[], int n);
float average(float arr[], int n);
int main(){
    float array[10];
    int i;
    for (i = 0; i < 10; i++){
        scanf("%f", &array[i]);
        //takes inputs and stores in an array
        if (array[i] == -99.0){
            break;
            //breaks the loop if the value of -99.0
        }
    }
    printf("sum=%f\n", sum(array, i));
    printf("average=%f\n", average(array, i));
    //prints the values
    return 0;
}
float sum(float arr[], int n){
    float sum = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] != -99.0){
            sum += arr[i];
            //sums the values if they are not -99.0
        }
    }
    return sum;
}
float average(float arr[], int n){
    return sum(arr, n) / n;
    //calls the sum function and divides it by the number of entered values
}*/
