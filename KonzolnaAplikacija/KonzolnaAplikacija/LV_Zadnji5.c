#define _CRT_SECURE_NO_WARNINGS
#include "zadaci.h"
#include <stdio.h>

int digitDifference(int number);

int LV_Zadnji5() {
    int m = 0;
    int rezultat;
    printf("Navedite vaš broj:\n");
    scanf("%d", &m);

    rezultat = digitDifference(m);

    printf("REZULTATI:\n");
    printf("%d", rezultat);



	return 0;
}

int digitDifference(int number) {
    int rezerva = 0;
    int lijevi = 0;
    int desni = 0;

    desni = number % 10;
    if (desni < 0) {
        desni = -desni;
    }

    while (number <= -10 || number >= 10) {
        number /= 10;
    }

    lijevi = number;
    if (lijevi < 0) {
        lijevi = -lijevi;
    }

    return lijevi - desni;
}

/*Napisati funkciju prema uputi u opisu zadatka

Napisati program u C jeziku koji dohvaća jedan cijeli broj. 
Dohvaćeni broj je potrebno poslati funkciji koja treba uzeti krajnje desnu znamenku i krajnje lijevu znamenku broja te izračunati razliku lijeve i desne znamenke. 
Izračunatu razliku funkcija treba vratiti nazad u funkciju main(). 
Nakon "REZULTATI:\n" ispisatni na ekran izračunatu razliku. Testiranje obaviti unutar main() funkcije.

Primjer ulaznih podataka
     -123

Nakon ključne riječi "REZULTATI:\n" ispisati broj razmaka.
Primjer ispisa:
    REZULTATI:
    -2

NE DIRATI deklaraciju funkcije!!!
Definiciju funkcije napisati nakon main() funkcije!!!

Deklarirati varijablu samostalno u samostalnoj liniji!
Rezultat poziva funkcije pohraniti prvo u varijablu i tek onda ispisati sadržaj varijable na ekran.


int digitDifference(int number);

int main(void) {



    //Ispisati rješenje nakon stringa: REZULTATI:\n!!!
    printf("REZULTATI:\n");

    return 0;

}
*/
