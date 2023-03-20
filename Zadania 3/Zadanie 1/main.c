#include <stdio.h>

int sgn(double x) {
    if(x==0) {
        printf("0");
        return 0;
    }
    else if(x<0) {
        printf("-1");
        return 0;
    }
    else
        printf("1");
    return 0;
}
int main() {
    double a;
    scanf("%lf",&a);
    printf(sgn(a));
    return 0;
}
