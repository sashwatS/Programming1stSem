/*
CH-230-A
a3_p11.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/

/*
#include <stdio.h>
#include <string.h>
int main(){
    char one[100], two[100], ch, concatOneTwo[100];
    scanf("%[^\n]%*c", one);
    scanf("%[^\n]%*c", two);
    scanf("%c", &ch);
    //takes inputs
    printf("length1=%ld\n", strlen(one));
    printf("length2=%ld\n", strlen(two));
    //prints the lengths of the strings
    strcpy(concatOneTwo, one);
    //copies one into concatOneTwo so that one can be used for the comparison
    printf("concatenation=%s\n", strcat(concatOneTwo, two));
    //concatenates concatOneTwo and two and prints it
    char three[100];
    strcpy(three, two);
    printf("copy=%s\n", three);
    //copies two to three and prints three
    if (strcmp(one, two) < 0) {
        printf("one is smaller than two\n");
    }
    else if (strcmp(one, two) > 0) {
        printf("one is larger than two\n");
    }
    else {
        printf("one is equal to two\n");
    }
    //if statements do the character comparisons
    char *found;
    found = strchr(two, ch);
    if (found) {
        printf("position=%ld\n", found - two);
    }
    else {
        printf("The character is not in the string\n");
    }
    //finds the character in two and prints an appropriate message
    return 0;
}
*/
