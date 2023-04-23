#include <stdio.h>
#include "stdlib.h"
#include "time.h"

// Tablice i wskaźniki

int main() {
    const int N = 1000;
    int tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d",&n);

    if (n<=0||n>N){
        printf("Liczba elementow musi byc z przedialu [1, &d]\n");
        return 1;
    }

    int lim = 999;
    srand(time(0));
    for (int *p = tab; p < tab + n; ++p){
        *p = rand() % lim + 1;
    }

    for (int *p = tab; p < tab + n; ++p){
        printf("%d ", *p);
    }

    int prawy, lewy;
    printf("\nPodaj zakres z wygenerowanej tablicy lewy/prawy: \n");
    scanf("%d%d",&lewy,&prawy);
    if (lewy<0 || prawy<0 || lewy>n || prawy>n){
        printf("\nbledny zakres\n");
    }
    else {
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


    printf("\n");

    for (int *p = tab; p < tab + n; ++p) {
        printf("%d ", *p);
    }
    return 0;
}
