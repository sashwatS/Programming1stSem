/*
CH-230-A
a6_p6.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*


#include <stdio.h>
int main() {
    unsigned char c;
    scanf("%c", &c);
    printf("The decimal representation is: %d\n", c);
    //prints the decimal representation of the unsigned char
    printf("The binary representation is: ");
    for (int i = 7; i >= 0; i--) {
        unsigned char bit = (c >> i) & 1;
        //moves to the leftmost position and checks for 1
        putchar(bit ? '1' : '0');
        //adds 1 if bit returns 1 and 0 otherwise
    }
    putchar('\n');
    return 0;
}

*/
