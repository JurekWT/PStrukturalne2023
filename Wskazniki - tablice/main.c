#include <stdio.h>
#include "stdlib.h"
#include "time.h"

// Tablice i wskaźniki

int main() {
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d",&n);

    if (n<=0||n>N){
        printf("Liczba elementow musi byc z przedialu [1, &d]\n");
        return 1;
    }

    short lim = 999;
    srand(time(0));
    for (short *p = tab; p < tab + n; ++p){
        *p = rand() % lim + 1;
    }

    for (short *p = tab; p < tab + n; ++p){
        printf("%5d", *p);
    }
    return 0;
}
