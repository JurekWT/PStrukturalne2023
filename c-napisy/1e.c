#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char s[]);
char *strncat(char t[], const char s[], size_t n);

int main()
{
    char a[50] = "Jakis przykladowy tekst ";
    char b[50] = "kolejny inny tekst ";
    char *p = calloc(strlen(a) + strlen(b), sizeof(char));
    strncat(a,b,4);
    strncat(b,a,3);

    printf("%s",b);

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


char *strncat(char t[], const char s[], size_t n)
{
    size_t len = 0;
    while (t[len] != '\0'){
        len++;
    }
    size_t i;
    for (i = 0; i < n && s[i] != '\0' ; ++i) {
        t[len + i] = s[i];
    }
    return t;
}