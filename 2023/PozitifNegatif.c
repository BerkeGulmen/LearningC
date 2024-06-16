#include <stdio.h>

int main () {
	int a;
	printf ("Lütfen bir küçük tam sayi giriniz: ");
	scanf ("%d", &a);
	if (a > 0) {
		printf ("a pozitifdir.");
	}
	else if (a < 0) {
		printf ("a negatiftir.");
	}
	else if (a == 0) {
		printf ("a sıfıra eşit.");
	}
	return 0;
}
