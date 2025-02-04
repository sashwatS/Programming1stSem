/*
CH-230-A
a2_p10.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
int main(){
    int hours, currentDay, n;
    int check = 0;
    //initializes the variables
    while (check == 0) {
        scanf("%d", &n);
        //first loops checks if inputted value is valid
        if (n > 0) {
            while (currentDay < n) {
                // the second loop to print the values is initialized
                if (currentDay == 0) {
                    hours += 24;
                    printf("%d day = %d hours\n", currentDay + 1, hours);
                    ++currentDay;
                }
                else {
                    hours += 24;
                    printf("%d days = %d hours\n", currentDay + 1, hours);
                    ++currentDay;
                }
                //the conditionals print either day or days depending on how many days there are
            }
        break;
        }
        else {
            printf("Invalid number, please enter a new number.\n");
        }
        //invalid inputs sends the user to the beginning of the loop
    }
}*/
