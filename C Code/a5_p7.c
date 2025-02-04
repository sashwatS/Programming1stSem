/*
CH-230-A
a5_p7.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char stringOne[100], stringTwo[100], *stringThree;
    fgets(stringOne, 100, stdin);
    stringOne[strcspn(stringOne, "\n")] = '\0';
    fgets(stringTwo, 100, stdin);
    stringTwo[strcspn(stringTwo, "\n")] = '\0';
    //takes inputs and removes newlines
    int length = (strlen(stringOne) + strlen(stringTwo) + 1);
    stringThree = (char*) malloc (sizeof (char) * length);
    if (stringThree == NULL)
        exit(1);
    //initializes the third string with the length of the first 2 strings
    stringThree = strcpy(stringThree, stringOne);
    stringThree = strcat(stringThree, stringTwo);
    //the third string receives the concatenated values
    printf("Result of concatenation: %s\n", stringThree);
    free(stringThree);
    //memory is freed
    return 0;
}*/
