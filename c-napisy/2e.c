#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char *s);
char *strncat(char *t, const char *s, size_t n);

int main()
{
    char a[50] = "Jakis przykladowy tekst ";
    char b[50] = "kolejny inny tekst ";
    char *p = calloc(strlen(a) + strlen(b), sizeof(char));
    strncat(b,a,5);
    strncat(a,b,3);
    printf("%s",b);

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


char *strncat(char *t, const char *s, size_t n)
{
    char *p = t;
    while (*t){
        t++;
    }
    while (*s && n--){
        *t++ = *s++;
    }
    *t = '\0';
    return p;
}
