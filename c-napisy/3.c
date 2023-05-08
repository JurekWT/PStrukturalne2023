#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

size_t strlen(const char *s);
bool strend(const char *s, const char *t);

int main()
{
    char a[50] = "Jakis przykladowy tekst ";
    char b[50] = "kolejny inny tekst ";
    char *p = calloc(strlen(a) + strlen(b), sizeof(char));
    strend(a,b);
    printf("%d",strend(a,b));

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

bool strend(const char s[], const char t[])
{
    int slen = 0, tlen = 0;
    while (s[slen] != '\0') slen++;
    while (t[tlen] != '\0') tlen++;
    while (tlen >= 0 && s[slen] == t[tlen]) {
        slen--;
        tlen--;
    }
    if (tlen <= 0) return true;
    else return false;
}