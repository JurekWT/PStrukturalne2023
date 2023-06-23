//
// Created by Jurek on 23.06.2023.
//

#ifndef STRUKTURY___ZADANIE_1_PIES_H
#define STRUKTURY___ZADANIE_1_PIES_H

#include <stdbool.h>
#include "zwierze.h"

typedef struct Pies{
    Zwierze zwierze;
    char rasa[MAX_LEN-1];
    char imie[MAX_LEN-1];
    char daneWlasciciela[MAX_LEN+10];
    bool czyZaczipowany;
}Pies;

Pies initPies(Zwierze *zw, char *rasa, char* imie, char* dane, bool czyZacz);

void showPies(Pies *p);

void tyciePsa(Pies *p, double kg);

#endif //STRUKTURY___ZADANIE_1_PIES_H
