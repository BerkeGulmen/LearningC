#include <stdio.h>
int main (void) {
    int sinav1;
    int sinav2;
    printf ("Lütfen sinav1'i giriniz: ");
    scanf ("%d", &sinav1);
    printf ("Lütfen sinav2'yi giriniz: ");
    scanf ("%d", &sinav2);
    if (sinav1 + sinav2 > 60) {
        printf ("Sinavi geçtiniz, sinavlari geçemeye devam ediniz.\n");
    }
    else {
        printf ("Sinavi geçemediniz lütfen daha fazla çalişin.\n");
    }
    printf ("Sinav ortalamanızın sonucu: %d\n", (sinav1 + sinav2) / 2);
    return 0;
}
