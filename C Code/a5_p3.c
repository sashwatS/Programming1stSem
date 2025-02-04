/*
CH-230-A
a5_p3.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include <string.h>
int count_lower(char* str) {
    int count = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            count++;
            //if the character is lowercase, the value of count increases
        }
        ptr++;
    }
    return count;
}
int main() {
    char str[50];
    do {
        fgets(str, 50, stdin);
        str[strcspn(str, "\n")] = 0;
        //removes newlines
        printf("Number of lowercase characters: %d\n", count_lower(str));
        //function is called
    }
    while (strlen(str) > 0);
    //loop only takes inputs until only a newline is entered
    return 0;
}*/
