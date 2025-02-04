/*
CH-230-A
a3_p7.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*/
/*
#include <stdio.h>
void print_form(int n, int m, char c);
int main(){
    int n, m;
    char c;
    scanf("%d", &n);
    getchar();
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);
    //gets inputs
    print_form(n, m, c);
    //calls function
    return 0;
}
void print_form(int n, int m, char c){
    for (int i = 0; i < n; i++){
        //arranges the rows
        for (int j = 0; j < m + (i * ((m + n - 1) - m) / n); j++){
            printf("%c", c);
        }
        printf("\n");
        //second loop prints the characters and a new line is printed at the end
    }
}*/
