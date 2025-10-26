#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV3_2(void) {
	int znakJedan, znakDva;

	printf("Unesite dva znaka:\n");
	scanf("%d", &znakJedan);

	printf("Unesite drugi znak:\n");
	scanf(" %d", &znakDva);

	printf("Prvi znak je %o oktalno i %x heksadecimalno.\n",znakJedan,znakJedan);
	printf("Drugi znak je %o oktalno a %x heksadecimalo.\n", znakDva, znakDva);

	return 0;
}