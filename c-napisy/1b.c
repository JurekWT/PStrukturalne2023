#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char s[]);

int main()
{
    char a[] = "Jakis przykladowy tekst ";
    char b[] = "kolejny inny tekst ";
    char *p = calloc(strlen(a) + 1, sizeof(char));
    strlen(a);
    strlen(b);
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