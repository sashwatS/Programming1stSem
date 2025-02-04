/*
CH-230-A
a2_p5.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
int main() {
    int a;
    char line[100];
    printf("input a number:\n");
    fgets(line, sizeof (line), stdin);
    sscanf(line, "%d", &a);
    //inputs a value for a
    int *ptr_a;
    ptr_a = &a;
    //initializes a pointer and a is assigned to it
    printf("address of number: %p\n", ptr_a);
    *ptr_a = *ptr_a + 5;
    printf("modified number: %d\n", a);
    printf("address of modified number: %p\n",ptr_a);
    //prints the values of pointers
    return 0;
} */