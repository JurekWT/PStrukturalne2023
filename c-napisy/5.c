#include <stdio.h>
#include <stdlib.h>

size_t strlen(const char *s);
int strindex(const char *s,const char *t);


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

int strindex(const char s[],const char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }

    return -1;
}