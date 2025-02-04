/*
CH-230-A
a8_p4.[h]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#ifndef STACK_H
#define STACK_H
struct stack
{
    unsigned int count;
    int array[12];
};
//stack is initialized
void push(struct stack *s, int num);
int pop(struct stack *s);
void empty(struct stack *s);
int isEmpty(struct stack *s);
//functions are initialized
#endif*/
