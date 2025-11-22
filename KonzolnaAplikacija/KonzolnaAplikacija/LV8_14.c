#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define NIZ 181

int LV8_14() {
    int i,duzina,pozicijaDvotocke,dvotocka = 0;
    char c;
    char prije[NIZ];
    char poslije[NIZ];

    printf("Unesite vas string (maximalno 180 znakova): \n");
    scanf("%180[^\n]", prije);
    duzina = strlen(prije);

    for (i = 0; i < duzina; i++) {
        if (prije[i] == ':') {
            dvotocka = 1;
            pozicijaDvotocke = i;
            break;
        }
    }

    if (dvotocka == 0) {
        printf("REZULTATI:\n");
        printf("Nema dvotocke");
        return 0;
    }

    printf("REZULTATI:\n");
    for (i = pozicijaDvotocke + 1; i < duzina; i++) {
        printf("%c", prije[i]);
    }

    

	return 0;
}


//Napisati program u C jeziku koji omogućava korisniku unos jednog stringa od maksimalno 180 znakova(VPL se ponaša kao unos s tipkovnice).
//Provjeriti nalazili se negdje u stringu znak dvotočke(:), 
//te ako se on pronađe potrebno je sve iza tog znaka zapisati u novi string te nakon poruke REZULTATI : \n ispisati na ekran izmijenjeni string.
//Testiranje obaviti unutar main() funkcije.Ukoliko u stringu nema dvotočke ispisati samo prikladnu poruku na ekran : "Nema dvotocke".