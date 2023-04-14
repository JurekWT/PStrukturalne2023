#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short minWartosc, short maxWartosc);
void wypisz(short tab[], int n);

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
    generuj(tab,n,15,20);
    wypisz(tab,n);

    return 0;
}


void generuj(short tab[], int n, short minWartosc, short maxWartosc)
{
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        tab[i] = rand()%maxWartosc+1;
        while (tab[i]<minWartosc)
            tab[i] = rand()%maxWartosc+1;
    }
}

void wypisz(short tab[], int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%d ",tab[i]);
    }
}