#include <stdio.h>
#include "stdlib.h"
#include "time.h"

// Tablice i wskaźniki

void generuj(short *tab,int n, short lim);
void wypisz(const short *tab, int n);
void collatz(short *tab, int n);
void zmien(short tab[], int n);
void signum(short tab[], int n);
void odwroc(short tab[], int lewy, int prawy);
int ileNieparzystych(const short tab[], int n);
int ileParzystych(const short tab[], int n);
int ileMaksymalnych(const short tab[], int n);

int main() {
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);
    printf("Podaj lewy i prawy element tablicy:");
    int lewy, prawy;
    scanf("%d%d", &lewy, &prawy);
    if (lewy<0 || prawy<0 || lewy>n || prawy>n){
        printf("\nbledny zakres\n");
    }

    if (n<=0||n>N){
        printf("Liczba elementow musi byc z przedialu [1, &d]\n");
        return 1;
    }

    generuj(tab, n, 100);
    wypisz(tab, n);
//    collatz(tab, n);
//    wypisz(tab, n);
//    zmien(tab, n);
//    wypisz(tab, n);
//    signum(tab, n);
    odwroc(tab, lewy, prawy);
    wypisz(tab, n);
//    printf("Nieparzystych: %d\n", ileNieparzystych(tab, n));
//    printf("Parzystych: %d\n", ileParzystych(tab, n));
//    printf("Ilosc wystapien maksymalnej: %d\n", ileMaksymalnych(tab, n));



    return 0;
}

void generuj(short *tab, int n, short lim){
    srand(time(0));
    for (short *p = tab; p < tab + n; ++p) {
        *p = rand() % lim + 1;
    }
}

void wypisz(const short *tab, int n){
    for (short *p = tab; p < tab + n; ++p) {
        printf("%5d", *p);
    }
    printf("\n");
}

void collatz(short *tab, int n){
    for (short *p = tab; p < tab + n; ++p) {
        if (*p > 0 && *p % 2 == 1){
            *p = (*p * 3) + 1;
        }
        else if (*p > 0 && *p % 2 == 0){
            do {
                *p = *p / 2;
            } while (*p % 2 == 0);
        }
        else
            continue;
    }
}

void zmien(short tab[], int n){
    for (short *p = tab; p < tab + n; ++p) {
        if (*p % 2 == 0){
            *p = -*p;
        }
        else {
            *p = *p * 2;
        }
    }
}

void signum(short tab[], int n){
    for (short *p = tab; p < tab + n; ++p) {
        if (*p > 0){
            *p = 1;
        }
        else {
            *p = -1;
        }
    }
}

void odwroc(short tab[], int lewy, int prawy)
{
    int dlugosc = ((prawy - lewy) + 1) / 2;
    int temp;
    short *pprawy = tab + prawy -1;
    short *plewy = tab + lewy -1;
    for (int i = 0; i < dlugosc; ++i) {
        temp = *plewy;
        *plewy = *pprawy;
        *pprawy = temp;
        plewy++;
        pprawy--;
    }
}

int ileNieparzystych(const short tab[], int n){
    int times = 0;
    for (short *p = tab; p < tab + n; ++p) {
        if (*p % 2 == 1 || -*p % 2 == 1) {
            times++;
        }
    }
    return times;
}

int ileParzystych(const short tab[], int n){
    int times = 0;
    for (short *p = tab; p < tab + n; ++p) {
        if (*p % 2 == 0 || -*p % 2 == 0) {
            times++;
        }
    }
    return times;
}

int ileMaksymalnych(const short tab[], int n){
    int max = *tab;
    for (short *p = tab; p < tab + n; ++p) {
        if (max < *p){
            max = *p;
        }
    }
    int times = 0;
    for (short *p = tab; p < tab + n; ++p) {
        if (max == *p){
            times++;
        }
    }
    return times;
}