#define _CRT_SECURE_NO_WARNINGS
#include "zadaci.h"
#include <stdio.h>
#include <stdlib.h>

void changeString(char* s);

int LV_Zadnji3() {
	int m = 0;
	char *p = NULL;
	srand(1);
	
	while (m < 4 || m > 25) {
		scanf("%d", &m);
	}

	p = malloc((m + 1) * sizeof(char));
	if(p == NULL) return 0;

	scanf("%s", p);

	changeString(p);

	printf("REZULTATI:\n");
	printf("%s\n",p);

	free(p);
	p = NULL;
	

	return 0;
}

void changeString(char* s) {
	int brojac = 0;

	while (*s != '\0') {
		if (*s >= 'a' && *s <= 'z') {
			if (brojac%2==1) {
				int dg = 'A';
				int gg = 'Z';
				*s = (dg + rand() % (gg - dg + 1));
			}
			brojac++;
		}
		s++;
	}
}