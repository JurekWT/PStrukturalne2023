#include <stdio.h>
#include <stdlib.h>

typedef struct DigitalClock
{
    unsigned godzina;
    unsigned minuta;
} DigitalClock;

void czas(const DigitalClock *s);

DigitalClock makeDigitalClock(unsigned godzina, unsigned minuta);

void incrementn(const DigitalClock *s, unsigned ileMinut);

void increment(const DigitalClock *s);

void decrementn(const DigitalClock *s, unsigned ileMinut);

void decrement(const DigitalClock *s);

int main()
{
    DigitalClock zegar = makeDigitalClock(0, 0);
    czas(&zegar);
    incrementn(&zegar, 80);
    increment(&zegar);
    decrementn(&zegar, 121);
    decrement(&zegar);
    return 0;
}

void czas(const DigitalClock *s)
{
    printf("%d:%d\n", s->godzina, s->minuta);
}


DigitalClock makeDigitalClock(unsigned godzina, unsigned minuta)
{
    DigitalClock temp;
    temp.godzina = (minuta/60 + godzina)%24;
    temp.minuta = minuta%60;
    return temp;
}

void incrementn(const DigitalClock *s, unsigned ileMinut)
{
    int godzina = (ileMinut/60 + s->godzina)%24;
    int minuta = (ileMinut + s->minuta)%60;
    printf("%d:%d\n", godzina, minuta);
}

void increment(const DigitalClock *s)
{
    int godzina = s->godzina;
    int minuta = s->minuta;
    if ((minuta+1)%60 == 0) {
        printf("%d:%d\n", (godzina+1)%24, (minuta + 1) % 60);
    }
    else
        printf("%d:%d\n", (godzina)%24, (minuta + 1) % 60);
}

void decrementn(const DigitalClock *s, unsigned ileMinut)
{
    int godzina = s->godzina;
    int minuta = s->minuta;
    int minuty = godzina * 60 + minuta - ileMinut;
    if (minuty < 0){
        minuty += 24 * 60;
    }
    godzina = minuty/60;
    minuta = minuty%60;
    printf("%d:%d\n", godzina, minuta);
}

void decrement(const DigitalClock *s)
{
    int godzina = s->godzina;
    int minuta = s->minuta;
    int minuty = godzina * 60 + minuta - 1;
    if (minuty < 0){
        minuty += 24 * 60;
    }
    godzina = minuty/60;
    minuta = minuty%60;
    printf("%d:%d\n", godzina, minuta);
}
