#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LV5_7() {
	float a, b, c;
	printf("Unesite 3 stranice trokuta: \n");
	scanf("%f %f %f",&a,&b,&c);

	if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || c + a <= b || b + c <= a) {
		printf("Takav trokut ne postoji!");
		return 0;
	}
	else if (a == b && b == c) {
		printf("Trokut je jednako stranican.");
	}
	else if (a == b && c != a) {
		printf("Trokut je jednakokracan.");
	}
	else if (c == a && b != a) {
		printf("Trokut je jednakokracan.");
	}
	else if (c == b && a != b) {
		printf("Trokut je jednakokracan.");
	}
	else{
		printf("Trokut je raznostranican.");
	}

	return 0;
}

/*7. Omogućiti korisniku unos duljine tri stranice a, b i c. Ispisati postoji li trokut s takvim stranicama i
ako postoji, ispisati na ekran kakav je (jednakostraničan, jednakokračan, raznostraničan).*/