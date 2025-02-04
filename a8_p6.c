/*
CH-230-A
a8_p6.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include <string.h>
int main() {
    char nameOne[100], nameTwo[100];
    fgets(nameOne, sizeof (nameOne), stdin);
    fgets(nameTwo, sizeof(nameTwo), stdin);
    nameOne[strcspn(nameOne, "\n")] = '\0';
    nameTwo[strcspn(nameTwo, "\n")] = '\0';
    //takes file names and removes the newline
    FILE *fileOne = fopen(nameOne, "r");
    FILE *fileTwo = fopen(nameTwo, "r");
    if (fileOne == NULL || fileTwo == NULL) {
        printf("Cannot open files\n");
        return 1;
    }
    //opens files in reading mode and returns 1 if error
    double numberOne, numberTwo;
    fscanf(fileOne, "%lf", &numberOne);
    fscanf(fileTwo, "%lf", &numberTwo);
    //scans files for doubles and extracts them
    double sum = numberOne + numberTwo;
    double difference = numberOne - numberTwo;
    double product = numberOne * numberTwo;
    double division = numberOne / numberTwo;
    //performs calculations
    FILE *output = fopen("results.txt", "w");
    if (output == NULL) {
        printf("Error writing to file\n");
        return 1;
    }
    //opens the file in writing mode and returns 1 if error
    fprintf(output, "%lf\n%lf\n%lf\n%lf\n", sum, difference, product, division);
    //prints values to output file
    fclose(fileOne);
    fclose(fileTwo);
    fclose(output);
    //closes the files
    return 0;
}*/
