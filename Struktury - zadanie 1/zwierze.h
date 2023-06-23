//
// Created by Jurek on 23.06.2023.
//

#ifndef STRUKTURY___ZADANIE_1_ZWIERZE_H
#define STRUKTURY___ZADANIE_1_ZWIERZE_H

#define MAX_LEN 20

typedef struct Zwierze {
    char gatunek[MAX_LEN-1];
    double masa;
    unsigned long long wiek;
} Zwierze;

Zwierze initZwierze(char *gatunek, double masa, unsigned long long wiek);

void showZwierze(Zwierze *p);

void tycieZwierzecia(Zwierze *p, double kg);




#endif //STRUKTURY___ZADANIE_1_ZWIERZE_H


