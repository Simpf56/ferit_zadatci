#define _CRT_SECURE_NO_WARNINGS
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

	p = (char*)malloc((m + 1) * sizeof(char));
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
	int i = 0;
	char* q = s;

	while (*q != '\0') {
		if (i % 2 == 1) {
			if (*q >= 'a' && *q <= 'z') {
				int dg = 'A';
				int gg = 'Z';
				*q = (char)(dg + rand() % (gg - dg + 1));
			}
		}
		q++;
		i++;
	}
}