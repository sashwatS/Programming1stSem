/*
CH-230-A
a8_p5.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*


#include <stdio.h>
int main() {
    FILE *file = fopen("chars.txt", "r");
    if (file == NULL) {
        printf("Cannot open file\n");
        return 1;
    }
    //opens the file in reading mode and returns error if it cannot
    char One, Two;
    One = fgetc(file);
    Two = fgetc(file);
    //declares the variables and adds the first two characters to them
    FILE *fileTwo = fopen("codesum.txt", "w");
    if (fileTwo == NULL) {
        printf("Error writing to file\n");
        return 1;
    }
    //opens the file in writing mode and returns error if it cannot
    int sum = One + Two;
    fprintf(fileTwo, "%d", sum);
    //sums the values and adds them to the output file
    fclose(file);
    fclose(fileTwo);
    //closes files
    return 0;
}*/
