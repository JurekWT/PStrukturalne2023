#include <iostream>

int pierwsza_cyrfa(int a) {
    int p;
    while (a>=10){
        a = a /10;
    }
    p = a;
    return p;
}

int ostatnia_cyfra(int a) {

}

int main() {
    printf("Podaj liczbe: \n");
    int a;
    scanf("%d",&a);
    printf("Pierwsza cyfra: %d\n", pierwsza_cyrfa(a));
    return 0;
}
