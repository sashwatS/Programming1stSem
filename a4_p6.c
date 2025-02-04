/*
CH-230-A
a4_p6.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
    int n, *dyn_arr;
    scanf("%d", &n);
    dyn_arr = (int*) malloc(sizeof (int ) * n);
    //allocates memory
    if (dyn_arr == NULL)
        exit(1);
    //terminates the memory allocation if null
    for (int i = 0; i < n; i++) {
        scanf("%d", &dyn_arr[i]);
        //takes inputs for array
    }
    int highest = dyn_arr[0];
    int secondHighest = INT_MIN;
    for (int i = 1; i < n; i++) {
        if (highest < dyn_arr[i]) {
            secondHighest = highest;
            highest = dyn_arr[i];
            //if a higher value is found, both variables are updated
        } else if (dyn_arr[i] < highest && dyn_arr[i] > secondHighest) {
            secondHighest = dyn_arr[i];
            //second highest will always be smaller than highest
        }
    }
    printf("highest value: %d\n", highest);
    printf("second highest value: %d", secondHighest);
    //prints the outputs
    free(dyn_arr);
    //frees memory
    return 0;
}
*/
