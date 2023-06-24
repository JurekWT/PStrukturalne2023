//
// Created by Jurek on 24.06.2023.
//

#include <string.h>
#include <stdio.h>
#include "komputer.h"

Komputer initKomputer(char* producent, float taktowanie, int pamiec){
    Komputer temp;
    strncpy(temp.producent, producent, MAX_LEN-2);
    temp.producent[MAX_LEN-2] = '\0';
    if (taktowanie <= 0){
        printf("Nieporawne taktowanie. Ustawiam 0\n");
        temp.taktowanie = 0;
    } else {
        temp.taktowanie = taktowanie;
    }
    if (pamiec <= 0){
        printf("Nieporawna pamiec. Ustawiam 0\n");
        temp.ileGBPamieci = 0;
    } else{
        temp.ileGBPamieci = pamiec;
    }
    return temp;
}

void showKomputer(const Komputer *komp){
    printf("Producent: %s\n", komp->producent);
    printf("Taktowanie: %.0f MHz\n", komp->taktowanie);
    printf("Pamiec: %d MB\n", komp->ileGBPamieci);
}

void podrasowanieKomputera(Komputer *komp, int pamiec){
    if (pamiec <= 0){
        printf("Nieporawna ilosc. Nic nie zostanie dodane.\n");
    } else{
        komp->ileGBPamieci += pamiec;
    }
}