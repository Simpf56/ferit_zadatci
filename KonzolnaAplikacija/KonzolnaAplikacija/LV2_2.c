#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // fali .h

int LV2_2(void) {
	int a;  // tocka zarez fali
	int b;
	printf("Unesite dvije cjelobrojne vrijednosti! \n");  //printf ne print , \n za novi red radi preglednosti
	scanf("%d", &a);    // & ide prije varijable i ne pod navodnicima , %d umjesto float jer se trazi cijeli broj
	scanf("%d", &b);  // fali & prije b
	printf("%d %d",a,b);  // printf("%d %d",a,b); Traži se cijeli broj ne float.
	return 0;
}