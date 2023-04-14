#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short limit);
void wypisz(short tab[], int n);
void collatz(short tab[], int n);
void zmien(short tab[], int n);
void signum(short tab[], int n);
void odwroc(short tab[], int n);
int ileNieparzystych(const short tab[],int n);
int ileParzystych(const short tab[], int n);
int ileMaksymalnych(const short tab[], int n);



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
    generuj(tab,n,100);
    wypisz(tab,n);
    printf("\n");
    collatz(tab,n);
    zmien(tab,n);
    signum(tab,n);
    printf("Ilosc nieparzystych: %d\n", ileNieparzystych(tab,n));
    printf("Ilosc parzystych: %d\n", ileParzystych(tab,n));
    printf("Ilosc maksymalnych: %d\n", ileMaksymalnych(tab,n));
    wypisz(tab,n);

    return 0;
}

void generuj(short tab[], int n, short limit)
{
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        tab[i]= rand()%limit+1;
    }
}

void wypisz(short tab[], int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%d ",tab[i]);
    }
}

void collatz(short tab[], int n)
{
    for (int i = 0; i < n; ++i) {
        if (tab[i]%2==1)
            tab[i]= 3*tab[i]+1;
        if (tab[i]%2==0)
            do {
                tab[i] /= 2;
            } while (tab[i]%2==0);
        if (tab[i]<=0)
            continue;
    }
}

void zmien(short tab[], int n)
{
    for (int i = 0; i < n; ++i) {
        if (tab[i]%2==1)
            tab[i]= tab[i]*2;
        else
            tab[i]=-tab[i];
    }
}

void signum(short tab[], int n)
{
    for (int i = 0; i < n; ++i) {
        if (tab[i]<0)
            tab[i] = -1;
        else
            tab[i]=1;
    }
}

void odwroc(short tab[], int n)
{

}

int ileNieparzystych(const short tab[],int n)
{
    int npar = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[i]%2==1)
            npar++;
    }
    return npar;
}

int ileParzystych(const short tab[], int n)
{
    int par = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[i]%2==0)
            par++;
    }
    return par;
}

int ileMaksymalnych(const short tab[], int n)
{
    int maks = tab[0];
    for (int i = 0; i < n; ++i) {
        if (maks < tab[i])
            maks = tab[i];
    }
    int ilosc = 0;
    for (int i = 0; i < n; ++i) {
        if (maks==tab[i])
            ilosc++;
    }
    return ilosc;
}