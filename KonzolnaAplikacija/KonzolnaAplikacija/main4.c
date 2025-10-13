//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//
//int main() {
//	SetConsoleOutputCP(1250);
//	SetConsoleCP(1250);
//
//	int prva = 0;
//	int druga = 0;
//	int treca = 0;
//
//	printf("Upišite prvu stranicu trokuta: ");
//
//	while (prva <= 0) {
//		scanf_s("%d", &prva);
//		if (prva <= 0) {
//			printf("Unos mora biti pozitivan broj! \n");
//		}
//	}
//
//	printf("Upišite drugu stranicu trokuta koja je dva puta veæa od prošle: ");
//
//	while (druga < 2*prva) {
//		scanf_s("%d", &druga);
//		if (druga < 2*prva) {
//			printf("Unos mora biti 2 puta veæi od prethodnog! \n");
//		}
//	}
//
//	printf("Upiši treæu stranicu trokuta koja je dva puta veæa od prošle: ");
//
//	while (treca < 2*druga) {
//		scanf_s("%d", &treca);
//		if (treca < 2*druga) {
//			printf("Unos mora biti 2 puta veæi od prethodnog! \n");
//		}
//	}
//
//	printf("Stranice trokuta su %d, %d, %d!", treca,druga,prva);
//
//	return 0;
//}