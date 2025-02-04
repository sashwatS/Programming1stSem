/*
CH-230-A
a4_p4.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_consonants (char str[]);
int main() {
    char str[100];
    do {
        fgets(str, 100, stdin);
        str[strcspn(str, "\n")] = 0;
        //removes newlines
        if (strlen(str) > 0) {
            printf("Number of consonants=%d\n", count_consonants(str));
            //function is called
        }
    } while (strlen(str) > 0);
    //loop only takes inputs until only a newline is entered
    return 0;
}
int count_consonants (char str[]) {
    int n = 0;
    char c;
    for (int i = 0; strlen(str) > i; i++) {
        c = tolower(str[i]);
        //converts all characters to lower case before evaluation
        if (c>='a' && c<='z' && c!='a' && c!='e' && c!='i' && c!='o' && c!='u') {
            n++;
            //if the character is a non-vowel alphabet, the value of n increases
        }
    }
    return n;
}*/
