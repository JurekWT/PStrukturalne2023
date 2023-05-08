#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

size_t strlen(const char *s);
bool strend(const char s[], const char t[]);

int main()
{
    char a[50] = "Jakis przykladowy tekst ";
    char b[50] = "kolejny inny tekst ";
    char *p = calloc(strlen(a) + strlen(b), sizeof(char));
    strend(a,b);
    strend(b,a);
    printf("%d",strend(a,b));
    printf("%d",strend(b,a));

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

bool strend(const char *s, const char *t)
{
    const char* p1 = s;
    const char* p2 = t;
    while (*p1 != '\0') {
        p1++;
    }
    while (*p2 != '\0') {
        p2++;
    }
    while (p1 >= s && p2 >= t && *p1 == *p2) {
        p1--;
        p2--;
    }
    return (p2 < s);
}