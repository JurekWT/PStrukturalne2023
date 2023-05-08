#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char s[]);
char *strnpcy(char t[], const char s[], size_t n);

int main()
{
    char a[] = "Jakis przykladowy tekst ";
    char b[] = "kolejny inny tekst ";
    char *p = calloc(strlen(a) + strlen(b), sizeof(char));
    strnpcy(p,a,30);
    strnpcy(p,b,5);
    printf("%s",p);

    return 0;
}

size_t strlen(const char s[])
{
    size_t len = 0;
    while ( s[len] ){
        len++;
    }
    return len;
}


char *strnpcy(char t[], const char s[], size_t n)
{
    size_t i;
    for (i = 0; i < n && s[i] != '\0' ; ++i) {
        t[i] = s[i];
    }
    for (; i < n; i++) {
        t[i] = '\0';
    }
    return t;
}

