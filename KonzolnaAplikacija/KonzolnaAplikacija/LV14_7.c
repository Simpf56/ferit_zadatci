#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* randomBrojevi(char* p, int n);

int LV14_7() {
	srand((unsigned)time(NULL));
	int n = 0;
	char* p;

	while (n < 1 || n > 11) {
		scanf("%d", &n);
	}

	p = (char*)malloc((n+1) * sizeof(char));
	if (p == NULL) {
		return 1;
	}

	p = randomBrojevi(p, n);

	printf("%s", p);



	free(p);
	return 0;
}

char* randomBrojevi(char* p, int n) {
	*p = '1' + rand() % 9;

	for (int i = 1; i < n; i++) {
		*(p+i) = '0' + rand() % 10;
	}
	p[n] = '\0';

	return p;
}

/*5. Napisati funkciju koja u predanom joj stringu postavlja sve znakove u pseudo-slučajno generirane
znamenke (pripaziti da prvi znak u stringu ne bude '0'). U glavnom dijelu programa omogućiti
korisniku unos broja n (1 <= n <= 11), te dinamički zauzeti memoriju za n podataka tipa char koji će
predstavljati string. Iskoristiti string pri pozivu napisane funkcije i naknadno ispisati izmijenjeni
string.*/