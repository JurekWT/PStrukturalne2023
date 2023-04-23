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

    for (int *p = tab; *p < tab + n; ++p) {
        if (*p % 2 == 1){
            *p *= 2;
        }
        else
            *p = -*p;
    }
    for (int *p = tab; p < tab + n; ++p) {
        if (*p > 0){
            *p = 1;
        }
        else
            *p = -1;
    }


    printf("\n");

    for (int *p = tab; p < tab + n; ++p) {
        printf("%d ", *p);
    }
    return 0;
}
