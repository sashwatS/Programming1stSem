/*
CH-230-A
a4_p2.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
#include <string.h>
int main() {
    char String[50];
    fgets(String, sizeof(String), stdin);
    //takes inputs
    if (String[strlen(String) - 1] == '\n') {
        String[strlen(String) - 1] = '\0';
    }
    for (int i = 0; i < strlen(String); i++) {
        if (i % 2 == 1) {
            printf(" ");
            //prints a space if the position of odd
        }
        printf("%c\n", String[i]);
        //prints the character in the string
    }
    return 0;
}
*/
