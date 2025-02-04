/*
CH-230-A
a8_p9.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
#include <string.h>
int main() {
    int n;
    char names[100][100];
    //stores the amount of names and their maximum length
    scanf("%d", &n);
    getchar();
    FILE *output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }
    //initializes the output file
    char buffer[64];
    size_t bytesRead;
    //initializes the buffer
    for (int i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    //adds each file name into the names array
    printf("Concating the content of %d files ...\n", n);
    printf("The result is:\n");
    for (int i = 0; i < n; i++) {
        FILE *file = fopen(names[i], "rb");
        if (file == NULL) {
            printf("Cannot open file: %s\n", names[i]);
            return 1;
        }
        //opens each file from the names array
        while ((bytesRead = fread(buffer, 1, 64, file)) > 0) {
            fwrite(buffer, 1, bytesRead, output);
            fprintf(output, "\n");
            fwrite(buffer, 1, bytesRead, stdout);
            //prints in both the output file and the terminal
        }
        fclose(file);
        printf("\n");
    }
    printf("The result was written into output.txt\n");
    fclose(output);
    return 0;
}*/
