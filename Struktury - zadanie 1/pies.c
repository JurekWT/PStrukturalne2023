//
// Created by Jurek on 23.06.2023.
//

#include <string.h>
#include <stdio.h>
#include "pies.h"
Pies initPies(Zwierze *zw, char *rasa, char* imie, char* dane, bool czyZacz){
    Pies temp;
    temp.zwierze = *zw;
    strncpy(temp.rasa, rasa, MAX_LEN-2);
    temp.rasa[MAX_LEN-2] = '\0';
    strncpy(temp.imie, imie, MAX_LEN-2);
    temp.imie[MAX_LEN-2] = '\0';
    strncpy(temp.daneWlasciciela, dane, MAX_LEN+9);
    temp.daneWlasciciela[MAX_LEN+9] = '\0';
    temp.czyZaczipowany = czyZacz;
    return temp;
}

void showPies(Pies *p){
    showZwierze(&p->zwierze);
    printf("Rasa: %s\n", p->rasa);
    printf("Imie: %s\n", p->imie);
    printf("Dane Wlasciciela: %s\n", p->daneWlasciciela);
    if (p->czyZaczipowany == true){
        printf("Zaczipowany\n");
    } else
        printf("Niezaczipowany\n");
}

void tyciePsa(Pies *p, double kg){
    tycieZwierzecia(&p->zwierze, kg);
}