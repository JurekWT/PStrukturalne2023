#include <stdio.h>

int nwd(int a, int b) {
    if (b==0){
        return a;
    }
    return nwd(b, a%b);
}

void punkt_a(int n) {
    printf("Liczby wzajemnie pierwsze z %d:\n",n);
    for (int i = 1; i < n; i++) {
        if (nwd(i,n) == 1){
            printf("%d ",i);
        }
    }
}

void punkt_b(int n) {
    printf("Liczby doskonale mniejsze od %d:\n",n);
    for (int i = 1; i < n; i++) {
        int suma = 0;
        for (int j = 1; j < i; j++) {
            if (i%j==0)
                suma = suma+j;
        }
        if (suma==i)
            printf("%d ",suma);
    }
}

int main() {
    printf("Podaj liczbe: \n");
    int n;
    scanf("%d",&n);
//    punkt_a(n);
    printf("\n");
    punkt_b(n);
    return 0;
}
