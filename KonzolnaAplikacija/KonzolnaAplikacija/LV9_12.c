#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "zadaci.h"

int zbrajac(int broj);

int LV9_12() {
    int n, zbroj;
    printf("Unesite vas broj:\n");
    scanf("%d", &n);
    zbroj = zbrajac(n);
    printf("REZULTAT:\n");
    printf("%d", zbroj);
	return 0;
}


int zbrajac(int broj) {
    int rezultat, rezerva;
    while (broj >= 10) {           // ponavljaj dok broj nije jednoznamenkast
        rezultat = 0;               // resetiraj zbroj u svakoj iteraciji
        int kopija = broj;          // privremena kopija broja
        while (kopija > 0) {
            rezerva = kopija % 10;
            rezultat += rezerva;    // zbrajanje ide u 'rezultat', ne u 'broj'
            kopija /= 10;
        }
        broj = rezultat;            // postavi broj na zbroj znamenki
    }
    return broj;
}



/*Napisati funkciju koja za predani joj broj zbraja sve znamenke broja. Ako je zbroj višeznamenkast,
proces se ponavlja se dok se ne dođe do jednoznamenkastog zbroja. Primjerice, za argument
987987 funkcija bi trebala vratiti vrijednost 3, jer je zbroj nakon prvog zbrajanja znamenki 48 (koji
je dvoznamenkast), zatim kada se njegove znamenke zbroje dobije se broj 12 čije se znamenke
opet moraju zbrojiti što daje vrijednost 3. U svrhu testiranja u funkciji main() pozvati napisanu
funkciju s 579859 kao argumentom i na ekran ispisati povratnu vrijednost.*/