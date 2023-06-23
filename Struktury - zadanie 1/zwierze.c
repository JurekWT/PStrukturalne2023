//
// Created by Jurek on 23.06.2023.
//

#include "zwierze.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

Zwierze initZwierze(char *gatunek, double masa, unsigned long long wiek){
    Zwierze temp;
    strcpy(temp.gatunek, gatunek);
    temp.gatunek[MAX_LEN] = '\0';
    if (masa < 0){
        printf("Masa psa nieprawidlowa, ustawiam mase na 0kg\n");
        temp.masa = 0;
    } else
        temp.masa = masa;
    temp.wiek = wiek;
    return temp;
}

void showZwierze(Zwierze *p){
    printf("Gatunek: %s\n", p->gatunek);
    printf("Masa: %.2fkg\n", p->masa);
    printf("Wiek: %llu\n", p->wiek);
}

void tycieZwierzecia(Zwierze *p, double kg){
    if (kg < 0){
        printf("Ilosc kilogramow nie moze byc ujemna");
    }else
        p->masa += kg;
}