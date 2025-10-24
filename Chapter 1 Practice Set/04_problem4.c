/* Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest. */

#include <stdio.h>

int main() {
    float p = 34.12; // Principal amount
    int r = 5; // Rate of interest in percentage
    int t = 5; // Time in years
    printf("The value of simple interest is %f", (p * r * t) / 100);
    return 0;
}