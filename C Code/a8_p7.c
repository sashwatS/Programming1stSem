/*
CH-230-A
a8_p7.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
int main() {
    FILE *fileOne = fopen("text1.txt", "r");
    FILE *fileTwo = fopen("text2.txt", "r");
    FILE *output = fopen("merge12.txt", "w");
    if (fileOne == NULL || fileTwo == NULL || output == NULL) {
        printf("Cannot open files\n");
        return 1;
    }
    //opens files and returns 1 if error
    char line[256];
    while (fgets(line, sizeof (line), fileOne) != NULL) {
        fprintf(output,"%s", line);
    }
    while (fgets(line, sizeof (line), fileTwo) != NULL) {
        fprintf(output,"%s", line);
    }
    //copies each line from each input file into a variable and
    // copies it to the output file  until a NULL line is reached
    fclose(fileOne);
    fclose(fileTwo);
    fclose(output);
    return 0;
}*/
