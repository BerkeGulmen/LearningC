#include <stdio.h>
int main (void) {
    int a;
    printf ("Kaça kadar sayıların toplamını görmek istersiniz? ");
    scanf ("%d", &a);
    int toplam;
    toplam = 0;
    int b;
    b = 1;
    while (a >= b) {
        toplam = toplam + b;
        b = b + 1;
    }
    printf ("Sayilarin toplaminin sonucu: %d\n", toplam);
    return 0;
}
