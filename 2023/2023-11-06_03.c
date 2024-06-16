#include <stdio.h>
int main (void) {
    int not1;
    int not2;
    int ortalama;
    printf ("Lütfen not1'i giriniz: ");
    scanf ("%d", &not1);
    printf ("Lütfen not2'yi giriniz: ");
    scanf ("%d", &not2);
    if (not1 + not2 > 50) {
        printf ("Sınıftan geçtiniz.");
    }
    else {
        printf ("Sınıftan kaldınız.");
    }
    printf ("Ortalamanız: %d\n", (not1 + not2) / 2);
    return 0;
}