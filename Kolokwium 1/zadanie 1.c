#include <stdio.h>
#include <stdlib.h>

double funkcjaliniowa(double a, double b);

int main() {
    printf("%f\n", funkcjaliniowa(5,8));
    printf("%f\n", funkcjaliniowa(-2,4));
    return 0;
}

double funkcjaliniowa(double a, double b)
{
    return -b/a;
}