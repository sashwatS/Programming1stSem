/*
CH-230-A
a8_p4.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include "stack.h"
int main(void) {
    unsigned int decimal_num;
    printf("Enter a positive decimal number: ");
    scanf("%u", &decimal_num);
    //takes unsigned int as input
    struct stack binary_stack;
    binary_stack.count = 0;
    //stack is initialized
    while (decimal_num > 0) {
        int remainder = decimal_num % 2;
        push(&binary_stack, remainder);
        decimal_num /= 2;
    }
    //converts the number to binary and pushes into stack
    printf("Binary representation: ");
    while (!isEmpty(&binary_stack)) {
        int bit = pop(&binary_stack);
        printf("%d", bit);
    }
    //pops the binary and prints it to terminal
    printf("\n");
    return 0;
}*/
