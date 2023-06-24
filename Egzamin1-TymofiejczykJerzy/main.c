#include "komputer.h"
#include "laptop.h"
#include <stdbool.h>
#include <string.h>

int main() {
    Komputer przykladowyKomputer = initKomputer("IBM", 1000, 1024);
    showKomputer(&przykladowyKomputer);
    podrasowanieKomputera(&przykladowyKomputer, 1024);
    showKomputer(&przykladowyKomputer);
    Laptop przykladowyLaptop = initLaptop(&przykladowyKomputer, "T123", true);
    showLaptop(&przykladowyLaptop);
    Laptop przykladowyLaptop2 = initLaptop(&przykladowyKomputer, "T12345678901234567890", false);
    showLaptop(&przykladowyLaptop2);
    podrasowanieLaptopa(&przykladowyLaptop2, 2048);
    showLaptop(&przykladowyLaptop2);
    strncpy(&przykladowyLaptop2.model, "L098", MAX_LEN-2);
    przykladowyLaptop2.model[MAX_LEN-2] = '\0';
    showLaptop(&przykladowyLaptop2);
    strncpy(&przykladowyLaptop2.model, "Najlepszy na swiecie model komputera osobistego", MAX_LEN-2);
    przykladowyLaptop2.model[MAX_LEN-2] = '\0';
    showLaptop(&przykladowyLaptop2);
    return 0;
}
