/*
CH-230-A
a4_p10.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
#include <math.h>
void proddivpowinv(float a,float b,float *prod,float *div,float *pwr,float *invb);
int main(){
    float a, b, prod, div, pwr, invb;
    scanf("%f", &a);
    scanf("%f", &b);
    //a and b are inputted from the keyboard
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("product:%f division:%f power:%f inverse:%f", prod, div, pwr, invb);
    //the variables are printed after the function is called on them
    return 0;
}
void proddivpowinv(float a,float b,float *prod,float *div,float *pwr,float *invb){
    //the function name is too long, so I could not follow the 80 char/line rule
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1/b;
    //adding values to the pointers negates the need to return
}*/
