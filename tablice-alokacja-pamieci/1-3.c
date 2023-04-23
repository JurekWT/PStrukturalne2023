#include <stdio.h>
#include "stdlib.h"
#include "time.h"

short *generuj(size_t n, short minWartosc, short maxWartosc);
void wypisz(const short *tab, size_t n);
void kopiuj(short *kopia, const short *tab, size_t n);
short *kopia(const short *tab, size_t n);

int main() {
    printf("Rozmiar tablicy: ");
    size_t n = 0;
    scanf("%d", &n);
    short *tab = generuj(n, 0, 10);
    wypisz(tab, n);
    printf("\n");
    short *kopia1 = malloc(n * sizeof(short));
    kopiuj(kopia1, tab, n);
    wypisz(kopia1, n);
    printf("\n");
    wypisz(kopia(tab, n), n);
    free(tab);
    free(kopia1);
    return 0;
}

short *generuj(size_t n, short minWartosc, short maxWartosc){
    short *tab = malloc(n * sizeof(short));
    srand(time(0));
    for (size_t i = 0; i < n; ++i) {
        tab[i] = rand() % (maxWartosc - minWartosc + 1) + minWartosc;
    }
    return tab;
}

void wypisz(const short *tab, size_t n){
    for (size_t i = 0; i < n; ++i) {
        printf("%d ", tab[i]);
    }
}

void kopiuj(short *kopia, const short *tab, size_t n){
    for (size_t i = 0; i < n; ++i) {
        kopia[i] = tab[i];
    }
}

short *kopia(const short *tab, size_t n){
    short *kopia = malloc(n * sizeof(short ));
    for (size_t i = 0; i < n; ++i) {
        kopia[i] = tab[i];
    }
    return kopia;
}