#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char *s);
char *strnpcy(char *t, const char *s, size_t n);

int main()
{
    char a[] = "Jakis przykladowy tekst ";
    char b[] = "kolejny inny tekst ";
    char *p = calloc(strlen(a) + strlen(b), sizeof(char));
    strnpcy(p,a,5);
    strnpcy(p,b,10);
    printf("%s",p);

    return 0;
}

size_t strlen(const char *s)
{
    size_t len = 0;
    while ( *s++ ){
        len++;
    }
    return len;
}


char *strnpcy(char *t, const char *s, size_t n)
{
    char *p = t;
    while (n && (*t++ = *s++)){
        n--;
    }
    if (n){
        while (--n){
            *t++ = '\0';
        }
    }
    return p;
}
