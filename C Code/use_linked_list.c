/*
CH-230-A
a7_p3.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include "linked_list.h"
#include <stdio.h>
int main() {
    struct list *my_list = NULL;
    int n;
    char c;
    int quit = 0;
    while (!quit) {
        scanf(" %c", &c);
        switch (c) {
            case 'a':
                scanf("%d", &n);
                my_list = push_back(my_list, n);
                break;
            case 'b':
                scanf("%d", &n);
                my_list = push_front(my_list, n);
                break;
            case 'r':
                my_list = remove_first(my_list);
                break;
            case 'p':
                print_list(my_list);
                printf("\n");
                break;
            case 'q':
                dispose_list(my_list);
                quit = 1;
                break;
        }
        //character entered determines the operation, q also ends the loop
    }
    return 0;
}*/
