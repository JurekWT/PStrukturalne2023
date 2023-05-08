#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char *s);
char *strcat(char *t, const char *s);

int main()
{
    char a[50] = "Jakis przykladowy tekst ";
    char b[50] = "kolejny inny tekst ";
    char *p = calloc(strlen(a) + strlen(b), sizeof(char));
    strcat(b,a);
    strcat(a,b);
    printf("%s",a);

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


char *strcat(char *t, const char *s)
{
    char *p = t;
    while (*t != '\0'){
        t++;
    }
    while (*s != '\0'){
        *t++ = *s++;
    }
    *t = '\0';
    return p;
}
