#include <stdio.h>
int main (void) {
    int a;
    int b;
    int toplam;
    printf ("Kaça kadar sayıların toplamını istersiniz? ");
    scanf ("%d", &a);
    toplam = 0;
    b = 1;
    while (a >= b) {
        toplam = toplam + b;
        b = b + 1;
    }
    printf ("Söylediğiniz sayıya kadar olan sayıların hesaplanmış sonucu: %d\n", toplam);
    return 0;
}
