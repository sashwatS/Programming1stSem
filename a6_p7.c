/*
CH-230-A
a6_p7.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
unsigned char set3bits(unsigned char c, int bit1, int bit2, int bit3) {
    c |= (1 << bit1);
    c |= (1 << bit2);
    c |= (1 << bit3);
    //sets the bits to 1 if they are 0 using OR operators
    return c;
}
int main() {
    unsigned char c;
    int bit1, bit2, bit3;
    scanf("%c", &c);
    scanf("%d %d %d", &bit1, &bit2, &bit3);
    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");
    for (int i = 7; i >= 0; i--) {
        putchar((c & (1 << i)) ? '1' : '0');
    }
    putchar('\n');
    //prints the decimal and binary values
    c = set3bits(c, bit1, bit2, bit3);
    printf("After setting the bits: ");
    for (int i = 7; i >= 0; i--) {
        putchar((c & (1 << i)) ? '1' : '0');
    }
    putchar('\n');
    //calls the function and prints the output
    return 0;
}*/
