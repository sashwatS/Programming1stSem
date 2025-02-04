/*
CH-230-A
a2_p9.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
#include <ctype.h>
//allows the use of the isdigit and isalpha functions
int main(){
    char value;
    char l[100];
    fgets(l, sizeof(l), stdin);
    sscanf(l, "%c", &value);
    //takes input
    if (isdigit(value)){
        printf("%c is a digit\n", value);
    }
    else if (isalpha(value)){
        printf("%c is a letter\n", value);
    }
    else {
        printf("%c is some other symbol\n", value);
    }
    //checks if the value is a letter, digit or something else and outputs a message
    return 0;
} */