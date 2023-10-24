#include <stdio.h>

int main() {
    int side;
    scanf("%d", &side);

    // Calculate surface area and volume
    int surfaceArea = 6 * side * side;
    int volume = side * side * side;

    // Print the results
    printf("Surface area = %d and Volume = %d", surfaceArea, volume);

    return 0;
}
