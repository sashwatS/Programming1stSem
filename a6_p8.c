/*
CH-230-A
a6_p8.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include <stdlib.h>
struct list {
    int info ;
    struct list * next ;
    //initializes linked list for the functions
};

void print_list ( struct list * my_list ) {
    struct list *p;
    for (p = my_list; p; p = p->next) {
        printf("%d ", p->info);
        //prints the data part of the linked list
    }

}

struct list * push_front ( struct list * my_list , int value ) {
    struct list * newel ;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
        }
    newel -> info = value ;
    newel -> next = my_list ;
    return newel ;
    //adds new value to the front of the list
}

struct list * push_back ( struct list * my_list , int value ) {
    struct list * cursor , * newel ;
    cursor = my_list ;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
        }
    newel -> info = value ;
    newel -> next = NULL ;
    //pushes value to the back and makes it point to NULL
    if ( my_list == NULL )
        return newel ;
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    cursor -> next = newel ;
    return my_list ;
}

struct list *remove_first(struct list * my_list) {
    if (my_list == NULL) {
        return NULL;
    }
    struct list *new_head = my_list -> next;
    free(my_list);
    //the second value becomes the first and memory is freed for the first
    return new_head;
}

void dispose_list ( struct list * my_list ) {
    struct list * nextelem ;
    while ( my_list != NULL ) {
        nextelem = my_list -> next ;
        free ( my_list );
        //the loop iterates and frees memory for each value
        my_list = nextelem ;
        }
    }

int main() {
    struct list * my_list = NULL ;
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
                //\n formats the linked list
                break;
            case 'q':
                dispose_list(my_list);
                quit = 1;
                break;
                //list iterates until q is input
        }
        //the functions are called per the character entered by the user
    }
    return 0;
}*/
