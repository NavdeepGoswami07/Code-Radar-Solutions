#include <stdio.h>

int main() {
    float number;  
    printf("Enter a floating-point number: ");  // Clear prompt for input
    scanf("%f", &number);  // Read the float input
    printf("You entered: %.2f\n", number);  // Print the number with 2 decimal places
    return 0;
}


