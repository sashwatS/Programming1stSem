/*
CH-230-A
a4_p12.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
#include <string.h>
void replaceAll(char *str, char c, char e);
int main() {
    char str[80], c, e;
    int check = 1;
    while (check == 1) {
        fgets(str, sizeof (str), stdin);
        if (str[strlen(str) - 1] == '\n') {
            str[strlen(str) - 1] = '\0';
        }
        //string input
        if ((strcmp("stop", str)) == 0)
            break;
        //loops breaks when stop is entered
        scanf("%c", &c);
        getchar();
        scanf("%c", &e);
        getchar();
        //getchar used after last scanf reduce the newline in the next loop iteration
        printf("character to be replaced: %c\n", c);
        printf("replacing character: %c\n", e);
        printf("string before replacement: %s\n", str);
        replaceAll(str, c, e);
        //function is called, changing the values within the string
        printf("string after replacement: %s\n", str);
    }
    return 0;
}
void replaceAll(char *str, char c, char e) {
    while (*str != '\0') {
        if (*str == c) {
            *str = e;
            //value inside the string is changed directly
        }
        str++;
    }
}*/
