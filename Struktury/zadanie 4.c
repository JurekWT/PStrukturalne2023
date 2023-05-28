#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

typedef struct Towar
{
    char nazwa[MAX_LEN];
    double cenaBrutto;
    float stawkaVAT;
} Towar;

Towar makeTowar(const char *nazwa, double cenaBrutto, float stawkaVAT);

Towar copyTowar(const Towar *s);

double cenaNetto(const Towar *s);

double kwotaVAT(const Towar *s);

void show(const Towar *s);


int main()
{
    Towar kapustka = makeTowar("Kapustka", 5.60, 0.23);
    show(&kapustka);
    Towar kapustka2 = copyTowar(&kapustka);
    show(&kapustka2);
    printf("Cena netto: %.2fzl\n", cenaNetto(&kapustka2));
    printf("Kwota VAT: %.2fzl\n", kwotaVAT(&kapustka2));
    return 0;
}

Towar makeTowar(const char *nazwa, double cenaBrutto, float stawkaVAT)
{
    Towar temp;
    strncpy(temp.nazwa, nazwa, MAX_LEN);
    temp.cenaBrutto = cenaBrutto;
    temp.stawkaVAT = stawkaVAT;
    return temp;
}

Towar copyTowar(const Towar *s)
{
    Towar temp;
    strncpy(temp.nazwa, s->nazwa, MAX_LEN);
    temp.cenaBrutto = s->cenaBrutto;
    temp.stawkaVAT = s->stawkaVAT;
    return temp;
}

double cenaNetto(const Towar *s)
{
    return s->cenaBrutto / (1+s->stawkaVAT);
}

double kwotaVAT(const Towar *s)
{
    return s->cenaBrutto - cenaNetto(s);
}

void show(const Towar *s)
{
    printf("Nazwa: %-10s\t cena Brutto: %.2fzl VAT: %.2f%\n", s->nazwa, s->cenaBrutto, s->stawkaVAT);
}
