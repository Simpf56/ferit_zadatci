#include <stdio.h>

int LV3_3() {
	int a = 1;
	float b = 2.2f;
	double c = 23.5f;
	long d = 23.5f;

	printf("Vrijednost 1. varijable je %d i zauzima %lu bajtova.\n", a, sizeof(a));
	printf("Vrijednost 2. varijable je %.2f i zauzima %lu bajtova.\n", b, sizeof(b));
	printf("Vrijednost 3. varijable je %.2lf i zauzima %lu bajtova.\n", c, sizeof(c));
	printf("Vrijednost 4. varijable je %ld i zauzima %lu bajtova.\n", d, sizeof(d));
	
	return 0;
}