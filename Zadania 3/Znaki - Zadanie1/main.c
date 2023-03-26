#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Podaj znak: ");
    int znak = getchar();
    if (isupper(znak)){
        znak = tolower(znak);
        putchar(znak);
    }
    else if (islower(znak)){
        znak = toupper(znak);
        putchar(znak);
    }
    else
        putchar(znak);
    return 0;
}
