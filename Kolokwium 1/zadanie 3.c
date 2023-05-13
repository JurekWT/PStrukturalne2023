#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *strncat(char *t, const char *s, size_t n);

int main() {
    size_t n;
    scanf("%d",&n);
    char a[] = "przykladowy napis";
    char b[] = "drugi przykladowy napis";
    printf("%s\n", a);
    printf("%s\n", b);
    strncat(a,b,n);
    strncat(b,a,n);
    printf("%s\n", a);
    printf("%s\n", b);

}

char *strncat(char *t, const char *s, size_t n)
{
    char *p = t;
    while (*t) {
        t++;
    }
    while (*s && n--){
        *t++ = *s++;
    }
    *t = '\0';
    return p;
}