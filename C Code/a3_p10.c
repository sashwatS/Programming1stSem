/*
CH-230-A
a3_p10.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*#include <stdio.h>
float product (float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);
int main(){
    float a,b,p;
    scanf("%f", &a);
    scanf("%f", &b);
    //takes inputs
    printf("product of floats=%f\n", product(a, b));
    //prints the return of the first function
    productbyref(a, b, &p);
    printf("product of floats by returned by reference=%f\n", p);
    //prints p which has its value changed using the second function
    modifybyref(&a, &b);
    printf("The values after calling modifybyref= %f, %f\n", a, b);
    //a and b have changed values through references using third function
    return 0;
}
float product(float a, float b){
    float product = a * b;
    return product;
    //product is returned normally
}
void productbyref(float a, float b, float *p){
    *p = a * b;
    //product is returned by changing the value in the address directly
}
void modifybyref(float *a, float *b){
    *a = *a + 3;
    *b = *b + 11;
    //values in the addresses are modified directly
}*/