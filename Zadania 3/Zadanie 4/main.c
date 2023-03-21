#include <stdio.h>
#include <math.h>

double procent_skladany(double Vo,double r,int n) {
    return Vo*pow(1+r,n);
}

int main() {
    printf("Kapital poczatkowy: 1000, stopa procentowa: 12%, lata: 3, Wynik: %.2lf\n", procent_skladany(1000.00,0.12,3));
    double a,b;
    int c;
    printf("Kapital poczatkowy: \n");
    scanf("%lf",&a);
    printf("Oprocentowanie (eg 0.12): \n");
    scanf("%lf",&b);
    printf("Lata: \n");
    scanf("%d",&c);
    printf("%.2lf", procent_skladany(a,b,c));
    return 0;
}
