#include <stdio.h>

double najmniejsza(double a, double b, double c) {
    double min = a;
    if (min > b) {
        min = b;
    }
    if (min >c) {
        min = c;
    }
    return min;
}
double srednia(double a, double b, double c) {
    return (a+b+c)/3;
}

double potega(double a, int b) {
    double p = a;
    for (int i = 1; i < b; i++) {
        p *= a;
        }
    return p;
    }

int main() {
    printf("Podaj trzy liczby:\n");
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("Najmniejsza liczba: %lf\n", najmniejsza(a,b,c));
    printf("Srednia: %lf\n", srednia(a,b,c));
    printf("Podaj dwie liczby: \n");
    double x;
    int n;
    scanf("%lf%d",&x,&n);
    printf("Potega a^b: %lf\n", potega(x,n));
    return 0;
}
