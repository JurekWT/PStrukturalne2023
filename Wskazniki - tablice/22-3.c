#include <stdio.h>
#include "stdlib.h"
#include "time.h"

// Tablice i wskaźniki

void generuj(short *tab, int n, short minWartosc, short maxWartosc);
void wypisz(const short *tab, int n);
int ileDodatnich(const short tab[], int n);
int ileUjemnych(const short tab[], int n);
int ileZerowych(const short tab[], int n);
short sumaDodatnich(const short tab[], int n);
short sumaUjemnych(const short tab[], int n);
int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n);


int main() {
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);

    if (n<=0||n>N){
        printf("Liczba elementow musi byc z przedialu [1, &d]\n");
        return 1;
    }

    generuj(tab, n, -99, 99);
    wypisz(tab, n);
    printf("Ilosc dodatnich: %d\n", ileDodatnich(tab, n));
    printf("Ilosc ujemnych: %d\n", ileUjemnych(tab, n));
    printf("Ilosc zerowych: %d\n", ileZerowych(tab, n));
    printf("Suma dodatnich: %d\n", sumaDodatnich(tab, n));
    printf("Suma ujemnych: %d\n", sumaUjemnych(tab, n));
    printf("dlugosc maksymalnego ciagu dodatnich: %d\n", dlugoscMaksymalnegoCiaguDodatnich(tab, n));

    return 0;
}

void generuj(short *tab, int n, short minWartosc, short maxWartosc){
    srand(time(0));
    for (short *p = tab; p < tab + n; ++p) {
        *p = rand() % (maxWartosc - minWartosc + 1) + minWartosc;
    }
}

void wypisz(const short *tab, int n){
    for (short *p = tab; p < tab + n; ++p) {
        printf("%5d", *p);
    }
    printf("\n");
}

int ileDodatnich(const short tab[], int n){
    int times = 0;
    for (short *p = tab; p < tab + n; ++p) {
        if (*p > 0){
            times++;
        }
    }
    return times;
}

int ileUjemnych(const short tab[], int n){
    int times = 0;
    for (short *p = tab; p < tab + n; ++p) {
        if (*p < 0){
            times++;
        }
    }
    return times;
}

int ileZerowych(const short tab[], int n){
    int times = 0;
    for (short *p = tab; p < tab + n; ++p) {
        if (*p == 0){
            times++;
        }
    }
    return times;
}

short sumaDodatnich(const short tab[], int n){
    short suma = 0;
    for (short *p = tab; p < tab + n ; ++p) {
        if (*p > 0){
            suma += *p;
        }
    }
    return suma;
}

short sumaUjemnych(const short tab[], int n){
    short suma = 0;
    for (short *p = tab; p < tab + n; ++p) {
        if (*p < 0){
            suma += *p;
        }
    }
    return suma;
}

int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n) {
    int max = 1;
    int temp = 0;
    for (short *p = tab; p < tab + n; p++) {
        if (*p > 0) {
            temp++;
            if (temp > max) {
                max = temp;
            }
        } else if (*p < 0) {
            temp = 0;
        }
    }
    return max;
}

