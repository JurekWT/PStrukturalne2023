#include <iostream>

int pierwsza_cyrfa(int a) {
    int p;
    while (a >= 10)
        a = a / 10;

    p = a;
    return p;
}

int ostatnia_cyfra(int a) {
    int o;
    o = a % 10;
    return o;
}

int ilosc_cyfr(int a) {
    int ilosc =1;
    while (a>=10) {
        a=a/10;
        ilosc++;
    }
    return ilosc;
}

int main() {
    printf("Podaj liczbe: \n");
    int a;
    scanf("%d",&a);
    printf("Pierwsza cyfra: %d\n", pierwsza_cyrfa(a));
    printf("Ostatnia cyfra: %d\n", ostatnia_cyfra(a));
    printf("Ilosc cyfr: %d", ilosc_cyfr(a));
    return 0;
}
