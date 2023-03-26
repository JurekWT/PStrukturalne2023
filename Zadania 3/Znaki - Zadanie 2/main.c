#include <stdio.h>
#include "ctype.h"

int main() {
    printf("Wprowadz tekst:\n");
    int c, mala_litera, wielka_litera, cyfra;
    while ((c = getchar()!= EOF)){
        if (islower(c)){
            cyfra++;
        }
    }
    return 0;
}
