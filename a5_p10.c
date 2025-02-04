/*
CH-230-A
a5_p10.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
void print_numbers(int n) {
    if (n == 1) {
        printf("%d\n", n);
        //terminates the function when 1 is reached
    } else {
        printf("%d\n", n);
        print_numbers(n - 1);
        //function is recursively called, printing n - 1 until 1 is reached
    }
}
int main() {
    int n;
    scanf("%d", &n);
    print_numbers(n);
    //takes input and calls the function
    return 0;
}*/
