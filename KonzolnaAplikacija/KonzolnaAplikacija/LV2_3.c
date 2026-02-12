#define _CRT_SECURE_NO_WARNINGS
#include "zadaci.h"
#include <stdio.h>
#include <windows.h>

int LV2_3() {
	SetConsoleOutputCP(1250);
	SetConsoleCP(1250);


	int x;
	int y;

	printf("Unesite va�u visinu: ");
	scanf_s("%d", &x);
	printf("Unesite va�u te�inu: ");
	scanf_s("%d", &y);
	printf("Va�a visina je %d a te�ina %d", x, y);

	return 0;
}