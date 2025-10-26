#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV4_3() {
	float broj;
	printf("Upišite jedan realan broj: \n");
	scanf("%f", &broj);
	if (broj > 0) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}