#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float middleDigit(int n);

int Ispit1_2() {
	int n = 0;
	float x;

	scanf("%d", &n);
	if (n / 10 == 0) {
		return 0;
	}
	
	x = middleDigit(n);

	printf("REZULTATI:\n");
	printf("%.2f", x);




	return 0;
}

float middleDigit(int number) {
	int rezerva = number;
	int brojac = 0;
	int broj1, broj2;
	int i;

	while (number != 0) {
		number /= 10;
		brojac++;
	}

	if (brojac % 2 == 1) {
		for (i = 0; i < brojac / 2; i++) {
			rezerva /= 10;
		}
		broj1 = rezerva % 10;
		return broj1;
	}
	else {
		for (i = 0; i < brojac / 2-1;i++) {
			rezerva /= 10;
		}
		broj1 = rezerva % 10;		
		rezerva /= 10;
		broj2 = rezerva % 10;
		return (broj1 + broj2)/2.0f;
		

	}

}

/*Napisati program u C jeziku koji dohvaća jedan cijeli broj. 
Dohvaćeni broj je potrebno poslati funkciji koja treba vratiti srednju znamenku broja ako broj ima neparni broj znamenki,
a ako broj ima parni broj znamenki, treba vratiti srednju vrijednost dvije srednje znamenke broja. Srednju znamenku broja funkcija treba vratiti nazad u funkciju main(). 
Nakon "REZULTATI:\n" ispisatni na ekran izračunatu srednju znamenku. Testiranje obaviti unutar main() funkcije.*/