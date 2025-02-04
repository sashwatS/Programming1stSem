/*
CH-230-A
a6_p4.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*


#include <stdio.h>
int main () {
    int n, scalar = 0, product;
    scanf("%d", &n);
    int V1[n], V2[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &V1[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &V2[i]);
    }
    //the vectors are defined and filled
#ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for (int i = 0; i < n; i++) {
        product = V1[i] * V2 [i];
        printf("%d\n", product);
        scalar += product;
    }
    //if INTERMEDIATE is defined, the intermediates will be printed
#else
    for (int i = 0; i < n; i++) {
        product = V1[i] * V2 [i];
        scalar += product;
    }
    //if it is not defined, only the scalar product will be calculated
#endif
    printf("The scalar product is: %d\n", scalar);
    //the scalar product is outputted
    return 0;
}
*/
