#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short minWartosc, short maxWartosc);
void wypisz(short tab[], int n);
int ileDodatnich(const short tab[], int n);
int ileUjemnych(const short tab[], int n);
int ileZerowych(const short tab[], int n);
short sumaDodatnich(const short tab[], int n);
short sumaUjemnych(const short tab[], int n);
int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n);

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
    generuj(tab,n,-99,99);
    wypisz(tab,n);
    printf("\nIlosc dodatnich: %d", ileDodatnich(tab, n));
    printf("\nIlosc ujemnych: %d", ileUjemnych(tab, n));
    printf("\nIlosc zerowych: %d", ileZerowych(tab, n));
    printf("\nSuma dodatnich: %d", sumaDodatnich(tab, n));
    printf("\nSuma ujemnych: %d", sumaUjemnych(tab, n));
    printf("\nDlugosc dodatniego ciagu: %d", dlugoscMaksymalnegoCiaguDodatnich(tab, n));

    return 0;
}


void generuj(short tab[], int n, short minWartosc, short maxWartosc)
{
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        tab[i] = rand() % (maxWartosc - minWartosc + 1) + minWartosc;
}

void wypisz(short tab[], int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%d ",tab[i]);
    }
}

int ileDodatnich(const short tab[], int n){
    int plus = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[i]>0){
            plus++;
        }
    }
    return plus;
}

int ileUjemnych(const short tab[], int n){
    int minus = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[i]<0){
            minus++;
        }
    }
    return minus;
}

int ileZerowych(const short tab[], int n){
    int zero = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[i]==0){
            zero++;
        }
    }
    return zero;
}

short sumaDodatnich(const short tab[], int n){
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[i]>0){
            suma += tab[i];
        }
    }
    return suma;
}

short sumaUjemnych(const short tab[], int n){
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[i] < 0){
            suma += tab[i];
        }
    }
    return suma;
}

int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n){
    int max = 1;
    int temp = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[i]>0){
            temp++;
            if (temp>max){
                max = temp;
            }
        }
        else if (tab[i]<0){
            temp = 0;
        }
    }
    return max;
}