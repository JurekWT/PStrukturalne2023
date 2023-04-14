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

    int prawy, lewy;
    printf("\nPodaj zakres z wygenerowanej tablicy lewy/prawy: \n");
    scanf("%d%d",&lewy,&prawy);
    if (lewy<0 || prawy<0 || lewy>n || prawy>n){
        printf("\nbledny zakres\n");
    }
    else {
        int dlugosc = ((prawy - lewy) + 1) / 2;
        int temp;
        for (int i = 0; i < dlugosc; ++i) {
            temp = tab[lewy];
            tab[lewy] = tab[prawy];
            tab[prawy] = temp;
            lewy++;
            prawy--;
        }
    }

    for (int i = 0; i < n; ++i) {
        printf("%2d ", tab[i]);
    }


    return 0;
}
