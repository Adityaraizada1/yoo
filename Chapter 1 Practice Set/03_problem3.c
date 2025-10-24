/* Write a program to convert clecius to fahrenheit */

#include <stdio.h>

int main() {
    float celsius = 38.0, fahrenheit; // Declare variables for Celsius and Fahrenheit

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0; // Convert Celsius to Fahrenheit
    printf("The value in Fahrenheit is: %f\n", fahrenheit); // Print the result
    return 0;
}