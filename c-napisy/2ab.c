#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char *s);
char *strcpy(char *t, const char *s);

int main()
{
    char a[] = "Jakis przykladowy tekst ";
    char b[] = "kolejny inny tekst ";
    char *p = calloc(strlen(a) + strlen(b), sizeof(char));
    strcpy(p,a);
    strcpy(p,b);
    strlen(a);
    strlen(b);
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

char *strcpy(char *t, const char *s)
{
    char *p = t;
    while ((*t++ = *s++))
        ;
    return p;
}
