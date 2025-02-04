/*
CH-230-A
a3_p4.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
#include <string.h>
int position(char str[], char c) {
    int idx;
    */
/* Loop until end of string *//*

    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx) {
        */
/* do nothing *//*

    }
    return (str[idx] == c) ? idx : -1;
    // Return -1 if the character is not found.
}

int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        //takes input
        if (line[strlen(line) - 1] == '\n') {
            line[strlen(line) - 1] = '\0';
        }
        // Remove the newline character from the input
        int pos = position(line, 'g');
        //calls function
        if (pos != -1) {
            printf("The first occurrence of 'g' is at position: %d\n", pos + 1);
        } else {
            printf("'g' was not found in the string.\n");
        }
        //prints if and where g is found
        break;
    }
    return 0;
}
*/
