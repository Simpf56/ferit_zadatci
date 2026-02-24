#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NIZ 25

int Ispit1_1(){
	printf("USAO U Ispit1_1\n");
	int m = 0;
	int i, j;
	int matrica[NIZ][NIZ];
	int x;

	while (m < 4 || m>24) {
		scanf("%d", &m);
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			do{
				scanf("%d", &x);
			} while (x % 2 == 0);
			matrica[i][j] = x;
		}
	}

	printf("REZULTATI:\n");
	for (j = 0; j < m; j++) {
		float srednja = 0.0f;
		for (i = 0; i < m; i++) {
			srednja += matrica[i][j];
		}
		printf("%.2f\n",srednja /= m);
	}



	return 0;
}
