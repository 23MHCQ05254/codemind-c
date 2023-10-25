#include <stdio.h>

int main() {
    int num1, num2;
    double average;

    // Input the two numbers
    scanf("%d %d", &num1, &num2);

    // Calculate the average
    average = (num1 + num2)/ 2.0;

    // Display the result with two decimal places
    printf("Average of %d and %d is: %.2lf
", num1, num2, average);

    return 0;
}
