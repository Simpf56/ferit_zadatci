#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "zadaci.h"
#define NIZ 20

void fillArray(int* a, int n);

int LV12_10(void) {
    int niz[NIZ];
    int n = 0;

    srand((unsigned)time(NULL));

    while (n < 1 || n>20) {
    printf("Unesite vrijednost n [1,20]: ");
    scanf("%d", &n);
    }

    fillArray(niz, n);

    printf("REZULTATI:\n");
    for (int i = 0; i < NIZ; i++) {
        printf("%d ", *(niz + i));
    }
    printf("\n");

    return 0;
}

void fillArray(int* a, int n) {
    int i;
    int dg = -10 * n;
    int gg = 10 * n;
    int brojevi;

    for (i = 0; i < NIZ; i++) {
        do {
            brojevi = dg + rand() % (gg - dg + 1);
        } while (brojevi >= -5 * n && brojevi <= 7 * n);
        *(a + i) = brojevi;
    }
}