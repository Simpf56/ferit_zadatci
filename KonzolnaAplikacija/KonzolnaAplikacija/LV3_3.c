#include <stdio.h>
#include "zadaci.h"

int LV3_3() {
	int a = 1;
	float b = 2.2f;
	double c = 23.556546;
	long double d = 23.55155153262626616161L;

	printf("Vrijednost 1. varijable je %d i zauzima %lu bajtova.\n", a, sizeof(a));
	printf("Vrijednost 2. varijable je %.2f i zauzima %lu bajtova.\n", b, sizeof(b));
	printf("Vrijednost 3. varijable je %lf i zauzima %lu bajtova.\n", c, sizeof(c));
	printf("Vrijednost 4. varijable je %.10Lf i zauzima %lu bajtova.\n", d, sizeof(d));
	
	return 0;
}