/* Find the area of the rectangle using C lang*/

// #include <stdio.h>

// int main() {
//     int length = 5; // Length of the rectangle
//     int breadth = 3; // Breadth of the rectangle
//     printf("The area of the rectangle is: %d\n", length * breadth); // Calculate and print the area
//     return 0;
// } 



/*This code take values from the user to calculate the values from the user to calculate the value of the rectangle*/

#include <stdio.h>

int main() {
    int length, breadth; // Declare variables for length and breadth
    printf("Enter the length of the rectangle:\n");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%d", &breadth);

    printf("The area of the rectangle is: %d\n", length * breadth); // Calculate and print the area
    return 0;
}