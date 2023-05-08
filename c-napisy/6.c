#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char *s);
int strindex(const char *s, const char *t);


int main()
{
    char a[50] = "Jakis przykladowy tekst ";
    char b[50] = "tekst";
    char *p = calloc(strlen(a) + strlen(b), sizeof(char));
    printf("%d", strindex(a,b));

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

int strindex(const char *s,const char *t) {
    char *p, *q, *r;

    for (p = s; *p != '\0'; p++) {
        for (q = p, r = t; *r != '\0' && *q == *r; q++, r++)
            ;
        if (r > t && *r == '\0')
            return p - s;
    }

    return -1;
}