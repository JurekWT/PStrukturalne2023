#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char s[]);
char *strcpy(char t[], const char s[]);

int main()
{
    char a[] = "Jakis przykladowy tekst ";
    char b[] = "kolejny inny tekst ";
    char *p = calloc(strlen(a) + strlen(b), sizeof(char));
    strcpy(p, a);
    strcpy(p,b);
    printf("%s",p);
    free(p);
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

char *strcpy(char t[], const char s[])
{
    int i = 0;
    while (s[i] != '\0'){
        t[i] = s[i];
        i++;
    }
    t[i] = '\0';
    return t;
}