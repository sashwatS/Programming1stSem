/*
CH-230-A
a8_p4.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include "stack.h"
void push(struct stack *s, int num) {
    if (s->count < 12) {
        s->array[s->count++] = num;
        printf("Pushing %d\n", num);
    } else {
        printf("Pushing Stack Overflow\n");
    }
}
//push function
int pop(struct stack *s) {
    if (isEmpty(s)) {
        printf("Popping Stack Underflow\n");
        return -1;
    } else {
        int temp = s->array[--(s->count)];
        return temp;
    }
}
//pop function
void empty(struct stack *s) {
    printf("Emptying Stack ");
    while (s->count > 0) {
        int num = pop(s);
        printf("%d ", num);
    }
    printf("\n");
}
//empties stack
int isEmpty(struct stack *s) {
    return s->count == 0;
}
//checks if stack is empty*/
