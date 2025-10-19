#include <stdio.h>
#define metar 1.5e5
#define e 2.7e-18
int LV3_4() {
	const float duzina = 1.5e3f;
	const float visina = 3.14e15f;

	printf("Velicina konstante duzine je %.2e i zauzima %lu bajtova memorije.\n", duzina, sizeof(duzina));
	printf("Velicina konstante visina je %.2e i zauzima %lu bajtova memorije.\n", visina, sizeof(visina));
	printf("Velicina konstante metar je %.2e i zauzima %lu bajtova memorije.\n", (double)metar, sizeof(metar));
	printf("Velicina konstante e je %.2e i zauzima %lu bajtova memorije.\n", (double)e, sizeof(e));
	return 0;
}