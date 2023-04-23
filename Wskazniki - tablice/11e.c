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

    printf("\n");

    int max = *tab;
    for (int *p = tab; p < tab + n; ++p) {
        if (max < *p){
            max = *p;
        }

    }
    int times = 0;
    for (int *p = tab; p < tab + n; ++p) {
        if (*p == max){
            times++;
        }
    }

    printf("Najwieksza: %d\n", max);
    printf("Ilosc powtorzen: %d\n", times);


    printf("\n");

    return 0;
}
