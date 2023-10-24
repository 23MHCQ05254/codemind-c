#include <stdio.h>

int main() {
    double kmph, mps;

    // Input the speed in kilometers per hour
    
    scanf("%lf", &kmph);

    // Convert kmph to m/s
    mps = kmph * 1000/ 3600;

    // Display the result
    printf("%.2lf",mps);

    return 0;
}
