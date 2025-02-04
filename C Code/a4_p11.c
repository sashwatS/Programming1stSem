/*
CH-230-A
a4_p11.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int count_insensitive(char *str, char c);
int main() {
    char c, *str, *strTwo;
    str = (char*) malloc(sizeof(char) * 50);
    if (str == NULL)
        exit(1);
    //allocates 50 chars to the first string
    printf("Enter the string:\n");
    fgets(str, 50, stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    //removes newline from the string
    printf("Enter the character:\n");
    scanf(" %c", &c);
    strTwo = (char*) malloc(strlen(str) + 1);
    //strTwo has the same length as the first string
    if (strTwo == NULL)
        exit(1);
    strcpy(strTwo, str);
    free(str);
    //copies the first string into the second and frees the first
    int counter = count_insensitive(strTwo, c);
    if (counter != 0) {
        printf("The character %c occurs %d times.\n", c,counter);
    } else {
        printf("The character was not found");
    }
    //calls the function and checks if there are any matches
    free(strTwo);
    return 0;
}
int count_insensitive(char *str, char c) {
    int count = 0;
    char element;
    while (*str != '\0') {
        element = tolower(*str);
        //turns all characters to lower case
        if (element == tolower(c))
            count++;
        //count increases for every match
        str++;
    }
    return count;
}*/
