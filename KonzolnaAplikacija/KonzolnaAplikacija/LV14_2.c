#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "zadaci.h"

int countSpace(char* s, int n);

int LV14_2(void) {
    int m = 0;
    char* p;
    int razmaci;

    while (m < 1 || m>25) {
        printf("Unesite veličinu niza:\n");
        scanf("%d", &m);
    }

    p = (char*)malloc((m + 1) * sizeof(char));
    if (p == NULL) return 0;

    (void)getchar();

    fgets(p, m + 1, stdin);

    razmaci = countSpace(p, m);

    printf("REZULTATI:\n");
    printf("%d\n", razmaci);

    free(p);
    p = NULL;

    return 0;
}

int countSpace(char* s, int n) {
    int i;
    int c;

    c = 0;
    i = 0;
    while (i < n && *s != '\0') {
        if (*s == ' ') c++;
        s++;
        i++;
    }
    return c;
}