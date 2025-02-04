/*
CH-230-A
a2_p6.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
int main() {
    double x, y;
    char l[100];
    printf("input the first number:\n");
    fgets(l, sizeof (l), stdin);
    sscanf(l, "%lf", &x);
    printf("input the second number:\n");
    fgets(l, sizeof (l), stdin);
    sscanf(l, "%lf", &y);
    //initializes variables and inserts the user inputs into them
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    //declares the pointers and assigns the addresses of the variables to them
    printf("address stored in the first pointer: %p\n", ptr_one);
    printf("address stored in the second pointer: %p\n", ptr_two);
    printf("address stored in the third pointer: %p\n", ptr_three);
    //prints the addresses in the pointers
    return 0;
} */