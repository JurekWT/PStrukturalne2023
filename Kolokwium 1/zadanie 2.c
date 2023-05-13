#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int n, short lim);
int ileMinimalnych(const short tab[], int n);
void wypisz(short tab[], int n);

int main() {
    short N = 1000;
    int n;
    scanf("%d", &n);
    short tab[n];
    generuj(tab, n, N);
    wypisz(tab,n);
    printf("\n");
    printf("%d\n",ileMinimalnych(tab,n));


}

void generuj(short tab[], int n, short lim)
{
    srand(time(0));
    for (int j = 0; j < n; ++j) {
        tab[j] = rand() % lim +1;
    }
}

int ileMinimalnych(const short tab[], int n)
{
    short min = tab[0];
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (min > tab[i]){
            min = tab[i];
        }
    }
    for (int j = 0; j < n; ++j) {
        if (min == tab[j]){
            count++;
        }
    }
    printf("%d \n", min);
    return count;
}

void wypisz(short tab[], int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%d ", tab[i]);
    }
}