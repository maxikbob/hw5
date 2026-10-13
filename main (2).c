#include <stdio.h>
#include <math.h>

int main() {
    double x, y, d, F;

    d = 1.0;
    x = -3.0;
    y = 2.7 * pow(10, -3); 

    F = (pow(cos(y), 3) + pow(2, x * d)) / (exp(y) + log(pow(sin(x), 2) + 7.4));

    printf("F = %lf\n", F);

    return 0;
}