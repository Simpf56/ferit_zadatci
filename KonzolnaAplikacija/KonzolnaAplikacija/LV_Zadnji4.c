#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 14

int LV_Zadnji4() {
    int m = 0;
    int max = -1;
    int i, j,k;
    int matrica[NIZ][NIZ];
    int najbolji = 0;

    while (m < 2 || m >= 15) {
    printf("Unesite velicinu matrice:\n");
        scanf("%d", &m);
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            int x = 0;
            while (x < 10 || x >= 100) {
                scanf("%d", &x);
            }
            matrica[i][j] = x;
        }
    }

    for (j = 0; j < m; j++) {
        int brojac = 0;
        for (i = 0; i < m; i++) {
            int n = matrica[i][j];
            int suma = 0;
            if (n > 1) {
                for (k = 1; k <= n / 2; k++) {
                    if (n % k == 0) {
                        suma += n;
                    }
                }
                if (suma == k) {
                    brojac++;
                }
            }
        }
        if (brojac > max) {
            max = brojac;
            najbolji = j;
        }
    }

    printf("REZULTATI:\n");
    for (i = 0; i < m; i++) {
        printf("%d ", matrica[i][najbolji]);
        printf("\n");
    }



	return 0;
}


//Napisati program u C jeziku koji popunjava cjelobrojnu kvadratnu matricu m x m gdje je m (2 ≤ m < 15),
// isključivo pozitivnim dvoznamenkastim vrijednostima (unos s tipkovnice - VPL). 
// Potrebno je pronaći stupac koji ima najviše savršenih brojeva (savršeni broj je broj koji je suma njegovih pravih djelitelja,
// broj 6 je savršen jer je zbroj njegovih pravih djelitelja 1 + 2 + 3 = 6) te nakon REZULTATI:\n ispisati na ekran sve vrijednosti iz stupca koji je imao najviše savršenih brojeva.
// Ako više stupaca ima isti najveći broj savršenih brojeva, odabrati prvi takav stupac. Testiranje obaviti unutar main() funkcije.

/*Napisati funkciju prema uputi u opisu zadatka

Primjer ulaznih podataka
3
28 11 28
28 12 15
13 10 28

Nakon ključne riječi "REZULTATI:\n" ispisati na ekran sve vrijednosti iz stupca koji je imao najviše savršenih brojeva. 
Ako više stupaca ima isti najveći broj savršenih brojeva, odabrati prvi takav stupac.
Testiranje obaviti unutar main() funkcije

Primjer ispisa:
REZULTATI:
28
28
13

Deklarirati dvodimenzionalno polje samostalno u samostalnoj liniji!

NAPOMENA! Svi zadaci će biti naknadno provjereni nakon ispita s novim testnim podacima.


int main(void) {



    //Ispisati rješenje nakon stringa: REZULTATI:\n!!!
    printf("REZULTATI:\n");

    return 0;

}*/