#include <stdio.h>
#include <string.h>
#include "zwierze.h"
#include "pies.h"

int main()
{
    Zwierze przykladoweZwierze = initZwierze("Canis familiarus domesticus", -2, 15);
    showZwierze(&przykladoweZwierze);
    tycieZwierzecia(&przykladoweZwierze, 5.25);
    showZwierze(&przykladoweZwierze);
    Pies przykladowyZaczipowanyPies = initPies(&przykladoweZwierze,"kundelek", "Fafik", "Wielki Milosnik Psow z Wielkiej Brytanii", true );
    showPies(&przykladowyZaczipowanyPies);
    Pies przykladowyNiezaczipowanyPies = initPies(&przykladoweZwierze, "jamnik", "Dlugi", "Wielki Milosnik Psow z Wielkiej Brytanii ale antyczipowiec", false);
    showPies(&przykladowyNiezaczipowanyPies);
    tyciePsa(&przykladowyZaczipowanyPies, 5.25);
    showPies(&przykladowyZaczipowanyPies);
    strncpy(&przykladowyZaczipowanyPies.daneWlasciciela, "Adam Nowak", MAX_LEN+9);
    przykladowyZaczipowanyPies.daneWlasciciela[MAX_LEN+9] = '\0';
    showPies(&przykladowyZaczipowanyPies);
    strncpy(&przykladowyZaczipowanyPies.daneWlasciciela, "Najwiekszy milosnik psow i kotow na swiecie", MAX_LEN+9);
    przykladowyZaczipowanyPies.daneWlasciciela[MAX_LEN+9] = '\0';
    showPies(&przykladowyZaczipowanyPies);

    return 0;
}
