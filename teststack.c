/*
CH-230-A
a7_p7.c
Nazrin Mutallibova
nmutallibo@jacobs-university.de
*//*



//define vatriables
#include <stdio.h>
#include "stack.h"

int main(void)
{
    //def variabls
    struct stack random;
    random.count = 0;

    char ch;
    int num;

    while (1)
    {
        //get value
        scanf(" %c", &ch);

        //switch cases
        switch (ch)
        {
            case 's':
                scanf("%d", &num);
                push(&random, num);
                break;
            case 'p':
                int popped = pop(&random);
                if (popped != -1)
                {
                    printf("Popping %d\n", popped);
                }
                break;
            case 'e':
                empty(&random);
                break;
            case 'q':
                printf("Quit\n");
                return 0;
            default:
                printf("Invalid command\n");
        }
    }

    return 0;
}*/
