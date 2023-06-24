//
// Created by Jurek on 24.06.2023.
//

#ifndef EGZAMIN1_TYMOFIEJCZYKJERZY_LAPTOP_H
#define EGZAMIN1_TYMOFIEJCZYKJERZY_LAPTOP_H

#include <stdbool.h>
#include "komputer.h"

typedef struct Laptop{
    Komputer komputer;
    char model[MAX_LEN-1];
    bool czySprawnaBateria;
}Laptop;

Laptop initLaptop(Komputer *komp, char *model, bool bateria);

void showLaptop(Laptop *lap);

void podrasowanieLaptopa(Laptop *lap, int pamiec);

#endif //EGZAMIN1_TYMOFIEJCZYKJERZY_LAPTOP_H
