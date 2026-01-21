#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void fillPSArray(float* niz, int duzina, float donjaGranica, float gornjaGranica);

int LV14_1() {
    int m = 0;
    float* p;
    int i;
    float min, max;
    float gg = 100.00f;
    float dg = -100.00f;

    srand(1);

    while (m < 1 || m >= 21) {
        scanf("%d", &m);
    }

    p = (float*)malloc(m * sizeof(float));
    if (p == NULL) {
        printf("REZULTATI:\n");
        return 0;
    }

    fillPSArray(p, m, dg, gg);

    min = *p;
    max = *p;
    for (i = 1; i < m; i++) {
        if (*(p + i) < min) min = *(p + i);
        if (*(p + i) > max) max = *(p + i);
    }

    printf("REZULTATI:\n");
    printf("min: %.2f max: %.2f", min, max);

    free(p);
    p = NULL;

    return 0;
}

void fillPSArray(float* niz, int duzina, float donjaGranica, float gornjaGranica)
{
    int i;
    for (i = 0; i < duzina; i++) {
        *(niz + i) = donjaGranica + (float)rand() / (float)RAND_MAX * (gornjaGranica - donjaGranica);
    }
}