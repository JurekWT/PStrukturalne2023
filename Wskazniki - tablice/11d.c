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

    int parzyste = 0;
    int nieparzyste = 0;
    for (int *p = tab; p < tab + n; ++p) {
        if (*p % 2 == 0){
            parzyste++;
        }
        else
            nieparzyste++;
    }

    printf("Parzyste: %d\n", parzyste);
    printf("Nieparzyste: %d\n", nieparzyste);


    printf("\n");

    for (int *p = tab; p < tab + n; ++p) {
        printf("%d ", *p);
    }
    return 0;
}
