/*
#include <stdio.h>

double scalar_product(int n, double v[], double w[]) {
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        result += v[i] * w[i];
    }
    return result;
}

void smallest(double vector[], int n, double *min, int *position) {
    *min = vector[0];
    *position = 0;
    for (int i = 1; i < n; i++) {
        if (vector[i] < *min) {
            *min = vector[i];
            *position = i;
        }
    }
}

void largest(double vector[], int n, double *max, int *position) {
    *max = vector[0];
    *position = 0;
    for (int i = 1; i < n; i++) {
        if (vector[i] > *max) {
            *max = vector[i];
            *position = i;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    double v[n], w[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%lf", &w[i]);
    }

    printf("Scalar product=%.6lf\n", scalar_product(n, v, w));

    double minV;
    int posMinV;
    smallest(v, n, &minV, &posMinV);
    printf("The smallest = %.6lf\n", minV);
    printf("Position of smallest = %d\n", posMinV);

    double maxV;
    int posMaxV;
    largest(v, n, &maxV, &posMaxV);
    printf("The largest = %.6lf\n", maxV);
    printf("Position of largest = %d\n", posMaxV);

    double minW;
    int posMinW;
    smallest(w, n, &minW, &posMinW);
    printf("The smallest = %.6lf\n", minW);
    printf("Position of smallest = %d\n", posMinW);

    double maxW;
    int posMaxW;
    largest(w, n, &maxW, &posMaxW);
    printf("The largest = %.6lf\n", maxW);
    printf("Position of largest = %d\n", posMaxW);

    return 0;
}*/
