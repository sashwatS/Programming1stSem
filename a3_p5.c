/*
CH-230-A
a3_p5.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
int main(){
    char c;
    int n;
    double temperatures[100], sum = 0;
    printf("enter operation:\n");
    scanf("%c", &c);
    printf("enter the number of values:\n");
    scanf("%d", &n);
    printf("enter values:\n");
    for (int i = 0; i < n; i++){
        scanf("%lf", &temperatures[i]);
    }
    //takes inputs, using a loop for the array inputs
    switch (c) {
        case 's':
            for (int i = 0; i < n; i++){
                sum += temperatures[i];
            }
            printf("sum: %lf\n", sum);
            //prints the sum if s is entered
            break;
        case 'p':
            printf("list of temperatures:\n");
            for (int i = 0; i < n; i++){
                printf("%lf\n", temperatures[i]);
                //lists the temperatures if p is entered
            }
            break;
        case 't':
            printf("list of temperatures in Fahrenheit:\n");
            for (int i = 0; i < n; i++){
                printf("%lf\n", ((9.0/5.0)*temperatures[i])+32);
                //converts to Fahrenheit if t is entered
            }
            break;
        default:
            for (int i = 0; i < n; i++){
                sum += temperatures[i];
            }
            printf("average: %lf\n", sum/n);
            //prints the average if another character is entered
    }
    return 0;
}*/
