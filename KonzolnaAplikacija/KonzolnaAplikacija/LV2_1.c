#define _CRT_SECURE_NO_WARNINGS
#include "zadaci.h"
#include <stdio.h>

int LV2_1(void){
	int a; // fali tocka zarez
	printf("Unesite cijeli broj:\n");
	scanf_s("%d", &a); /* ovo je komentar koji mora zavr�iti i fali & prije a */
	printf("Unijeli ste broj %d\n", a); 
	return 0; // fali nula
}