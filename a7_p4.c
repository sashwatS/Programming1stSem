/*
CH-230-A
a7_p4.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int check = 0;
void upperCase(const char str[]) {
    while (*str) {
        putchar(toupper(*str));
        str++;
        //individual characters are turned to uppercase temporarily
    }
    putchar('\n');
}

void lowerCase(const char str[]) {
    while (*str) {
        putchar(tolower(*str));
        str++;
        //individual characters are turned to lowercase temporarily
    }
    putchar('\n');
}
void ifLowerUpper(const char str[]) {
    while (*str) {
        if (isupper(*str)) {
            putchar(tolower(*str));
            //checks for uppercase and turns to lowercase
        }
        if (islower(*str)) {
            putchar(toupper(*str));
            //checks for lowercase and turns to uppercase
        }
        if (*str == ' '){
            putchar(' ');
            //leaves the spaces intact
        }
        str++;
    }
    putchar('\n');
}

void checkBreak (const char str[]) {
    check = 1;
    //breaks the loop in the main function
}
int main() {
    char c[100], n;
    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")] = '\0';
    //takes inputs and removes newline
    void (*array[])(const char[]) = {upperCase, lowerCase, ifLowerUpper, checkBreak};
    //the array is created
    while (check == 0) {
        scanf(" %c", &n);
         array[n - '1'](c);
         //the functions are called per their array placement
    }
    return 0;
}*/
