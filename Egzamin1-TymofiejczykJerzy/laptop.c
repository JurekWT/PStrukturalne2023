//
// Created by Jurek on 24.06.2023.
//

#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include "laptop.h"

Laptop initLaptop(Komputer *komp, char *model, bool bateria){
    Laptop temp;
    temp.komputer = *komp;
    strncpy(temp.model, model, MAX_LEN-2);
    temp.model[MAX_LEN-2] = '\0';
    temp.czySprawnaBateria = bateria;
    return temp;
}

void showLaptop(Laptop *lap){
    showKomputer(&lap->komputer);
    printf("Model: %s\n", lap->model);
    if (lap->czySprawnaBateria == true){
        printf("Bateria sprawna\n");
    } else{
        printf("Bateria niesprawna\n");
    }
}

void podrasowanieLaptopa(Laptop *lap, int pamiec){
    podrasowanieKomputera(&lap->komputer, pamiec);
}