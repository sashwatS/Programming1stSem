/*
CH-230-A
a3_p9.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
double sum25(double v[], int n);
int main() {
    int n;
    double v[20];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }

    double result = sum25(v, n);

    if (result != -111.0) {
        printf("sum=%lf\n", result);
        // prints the sum
    } else {
        printf("One or both positions are invalid\n");
        //prints a message if positions are invalid
    }

    return 0;
}

double sum25(double v[], int n) {
    if (n < 6) {
        return -111;
    } else {
        return v[2] + v[5];
    }
}*/
