#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: \n");
    int n;
    scanf("%d", &n);

    if (n<1 || n>1000){
        printf("Liczba elementow musi byc w przedziale [1,%d]",N);
        return 0;
    }

    short limit = 999;
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        tab[i] = rand() % limit +1;
    }

    for (int i = 0; i < n; ++i) {
        printf("%2d ", tab[i]);
    }

    int parzyste = 0, nieparzyste = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[i] % 2 == 0) {
            parzyste++;
        } else
            nieparzyste++;

    }
    printf("\nParzyste: %d",parzyste);
    printf("\nNieparzyste: %d",nieparzyste);

}
