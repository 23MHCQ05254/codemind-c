#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;

    // Input the coordinates of the two points
    
    scanf("%lf %lf", &x1, &y1);
    
    
    scanf("%lf %lf", &x2, &y2);

    // Calculate the distance using the Euclidean distance formula
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Display the result with 4 decimal places
    printf("%.4lf", distance);

    return 0;
}
