/*
CH-230-A
a5_p11.[c]
Sashwat Sharma
sassharma@jacobs-university.de
*//*

#include <stdio.h>
int isPrime(int x, int i) {
    if (x < 2)
        return 0;
    // numbers less than 2 are not prime
    if (x == 2)
        return 1;
    // 2 is prime
    if (x % i == 0)
        return 0;
    // not prime is divisible by i
    if (i * i > x)
        return 1;
    // if divisible by square root of i, then not prime
    return isPrime(x, i + 1);
    //calls function recursively
}

int main() {
    int x;
    scanf("%d", &x);
    if (isPrime(x, 2) == 0) {
        printf("%d is not prime\n", x);
    } else {
        printf("%d is prime\n", x);
    }
    //calls function and prints the appropriate message
    return 0;
}*/
