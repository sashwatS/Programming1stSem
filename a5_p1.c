/*
CH-230-A
a5_p1.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
int main() {
    int n;
    char ch;
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < (n - i); j++){
            //n-i will ensure that the chars are printed in descending order
            printf("%c", ch);
        }
        printf("\n");
        //prints a newline after every row of chars
    }
    return 0;
}*/
