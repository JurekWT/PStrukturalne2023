#include <stdio.h>

int zad3(int *p, int *q);
int *zad4(int *p, int *q);
void zad5(int *p, int *q);
void zad6(int *p, int *q);
int zad7(int *p, int *q);
void zad8(int n, int *w);

int main() {
    int a = 125;
    int b = 375;
    printf("Zmienna a: %d Jej adres: %p\n",a,&a);
    printf("Zmienna b: %d Jej adres: %p\n",b, &b);
    printf("Zadanie 3: %d\n", zad3(&a,&b));
    printf("Zadanie 4: %d\n", *zad4(&a, &b));
    zad5(&a, &b);
    printf("a = %d b = %d\n",a,b);
    zad6(&a, &b);
    printf("a = %d b = %d\n",a,b);
    printf("Suma: %d\n", zad7(&a, &b));
    zad8(1000, &b);
    printf("a = %d b = %d\n",a,b);
    return 0;
}

int zad3(int *p, int *q){
    if (*p>*q){
        return *q;
    }
    return *p;
}

int *zad4(int *p, int *q){
    if (*p>*q){
        return q;
    }
    return p;
}

void zad5(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void zad6(int *p, int *q){
    if (*q<*p){
        int temp = *p;
        *p = *q;
        *q = temp;
    }
}

int zad7(int *p, int *q){
    return *p + *q;
}

void zad8(int n, int *w){
    *w = n;
}