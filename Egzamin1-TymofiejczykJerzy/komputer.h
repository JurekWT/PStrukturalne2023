//
// Created by Jurek on 24.06.2023.
//

#ifndef EGZAMIN1_TYMOFIEJCZYKJERZY_KOMPUTER_H
#define EGZAMIN1_TYMOFIEJCZYKJERZY_KOMPUTER_H

#define MAX_LEN 30

typedef struct Komputer{
    char producent[MAX_LEN-1];
    float taktowanie;
    int ileGBPamieci;
}Komputer;

Komputer initKomputer(char* producent, float taktowanie, int pamiec);
void showKomputer(const Komputer *komp);
void podrasowanieKomputera(Komputer *komp, int pamiec);

#endif //EGZAMIN1_TYMOFIEJCZYKJERZY_KOMPUTER_H
