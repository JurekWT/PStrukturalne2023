#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char s[]);
char *strcat(char t[], const char s[]);

int main()
{
    char a[] = "Jakis przykladowy tekst ";
    char b[] = "kolejny inny tekst ";
    char *p = calloc(strlen(a) + strlen(b), sizeof(char));
    strcat(a,b);
    strcat(b,a);
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


char *strcat(char t[], const char s[])
{
    size_t len = 0;
    while (t[len] != '\0'){
        len++;
    }
    size_t len2 = 0;
    while (s[len2] != '\0'){
        t[len + len2] = s[len2];
        len2++;
    }
    t[len+len2] = '\0';
    return t;
}