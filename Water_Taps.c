#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    double Ra = 1.0 / X;
    double Rb = 1.0 / Y;

    double combined_rate = Ra + Rb;
    double time_to_fill = 1.0 / combined_rate;

    printf("%.0lf
", time_to_fill);

    return 0;
}
