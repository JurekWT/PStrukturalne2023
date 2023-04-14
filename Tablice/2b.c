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

    // nieparzyste = liczba*2, parzyste = -liczba
    for (int i = 0; i < n; ++i) {
        if (tab[i]%2==1){
            tab[i] = tab[i] *2;
        } else
            tab[i] = -tab[i];
    }
    printf("\n");
    for (int i = 0; i < n; ++i) {
        printf("%2d ", tab[i]);
    }

    // liczba = 1, -liczba = -1
    for (int i = 0; i < n; ++i) {
        if (tab[i]<0){
            tab[i]=-1;
        } else
            tab[i]=1;
    }
    printf("\n");
    for (int i = 0; i < n; ++i) {
        printf("%2d ", tab[i]);
    }

}
