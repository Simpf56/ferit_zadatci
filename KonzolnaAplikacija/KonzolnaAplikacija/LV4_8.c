#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV4_7() {
	float a, b, c;

	printf("Unesite dva realna broja:\n");
	scanf("%f",&a);
	printf("Drugi...: \n");
	scanf("%f", &b);
	printf("Varijabla A iznosi %.2f", a);
	printf("Varijabla B iznosi %.2f", b);

	c = a;
	a = b;
	b = c;

	printf("Varijabla A iznosi %.2f", a);
	printf("Varijabla B iznosi %.2f", b);

	return 0;
}