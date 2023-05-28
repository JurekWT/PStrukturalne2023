#include <stdio.h>

typedef struct DigitalClock
{
    unsigned godzina;
    unsigned minuta;
} DigitalClock;

void czas(const DigitalClock *s);

DigitalClock makeDigitalClock(unsigned godzina, unsigned minuta);

void incrementn(const DigitalClock *s, unsigned ileMinut);

int main()
{
    DigitalClock zegar = makeDigitalClock(64, 128);
    czas(&zegar);
    incrementn(&zegar, 40);
    czas(&zegar);
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
    s->minuta += ileMinut;
}
