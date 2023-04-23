#include <stdio.h>
#include "stdlib.h"
#include "time.h"

long *generuj(size_t n, long minWartosc, long maxWartosc);
long *sumaWektorow(size_t n, const long *wektor1, const long *wektor2);
void wypisz(size_t n, const long *tab);

int main() {
    printf("Rozmiar tablicy:");
    size_t n = 0;
    scanf("%d", &n);
    long *tab1 = generuj(n, 0, 10);
    long *tab2 = generuj(n, 5, 25);
    wypisz(n, tab1);
    printf("\n");
    wypisz(n, tab2);
    printf("\n");
    wypisz(n, sumaWektorow(n, tab1, tab2));

    return 0;
}

long *generuj(size_t n, long minWartosc, long maxWartosc){
    long *tab = malloc(n * sizeof(long));
    srand(time(0));
    for (size_t i = 0; i < n; ++i) {
        tab[i] = rand() % (maxWartosc - minWartosc + 1) + minWartosc;
    }
    return tab;
}

long *sumaWektorow(size_t n, const long *wektor1, const long *wektor2){
    long *suma = malloc(n * sizeof(long));
    for (size_t i = 0; i < n; ++i) {
        suma[i] = wektor1[i] + wektor2[i];
    }
    return suma;
}

void wypisz(size_t n, const long *tab){
    for (long *p = tab; p < tab + n; ++p) {
        printf("%5d", *p);
    }
}