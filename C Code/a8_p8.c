/*
CH-230-A
a8_p8.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    // Takes input and removes newline
    FILE *file = fopen(name, "r");
    if (file == NULL) {
        printf("Cannot open file\n");
        return 1;
    }
    // Opens the file in reading mode and returns 1 if an error occurs
    char ch;
    int counter = 0;
    bool inWord = false;
    while ((ch = fgetc(file)) != EOF) {
        // Loops run until the end of the file
        if (ch == ',' || ch == '?' || ch == '!' || ch == '.' || isspace(ch)) {
            if (inWord) {
                counter++;
                inWord = false;
            }
            */
/* Each word is separated by the special character.
             * If the program is in a word, the counter is incremented until
             * the special character is reached again, and inWord becomes false.
             *//*

        } else {
            inWord = true;
            // inWord is set to true after a special character is passed
        }
    }
    if (inWord) {
        counter++;
        // Counter is incremented for the last word in the file
        // that may not be between special characters
    }
    if (counter == 1)
        printf("The file contains 1 word.\n");
    if (counter > 1)
        printf("The file contains %d words.\n", counter);
    fclose(file);
    return 0;
}*/
