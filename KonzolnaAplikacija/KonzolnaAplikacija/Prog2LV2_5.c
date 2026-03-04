#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni(double** mat, int n);
void ispis(double** mat, int n);
double najveci(double** mat, int n);
void oslobodi(double** mat, int n);

int Prog2LV2_5() {
    int n, i;
    double** mat;

    srand((unsigned)time(NULL));

    do {
        scanf("%d", &n);
    } while (n < 2 || n > 8);

    mat = (double**)malloc(n * sizeof(double*));

    for (i = 0; i < n; i++) {
        *(mat + i) = (double*)malloc(n * sizeof(double));
    }

    popuni(mat, n);
    ispis(mat, n);

    printf("Najveci element: %.2lf\n", najveci(mat, n));

    oslobodi(mat, n);


	return 0;
}


void popuni(double** mat, int n) {
    int i, j;
    double r;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            r = (double)rand() / RAND_MAX;
            *(*(mat + i) + j) = -1.25 + r * (5.75 + 1.25);
        }
    }
}

void ispis(double** mat, int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%6.2lf ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

double najveci(double** mat, int n) {
    int i, j;
    double max = -1.25;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j && i + j < n - 1) {
                if (*(*(mat + i) + j) > max) {
                    max = *(*(mat + i) + j);
                }
            }
        }
    }

    return max;
}

void oslobodi(double** mat, int n) {
    int i;

    for (i = 0; i < n; i++) {
        free(*(mat + i));
    }

    free(mat);
}