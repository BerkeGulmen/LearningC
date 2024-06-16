
#include <stdio.h>
int main () {
    int a;
    printf ("Kaça kadar sayıların toplamını bulmamı istersiniz? ");
    scanf ("%d", &a);
    int toplam;
    toplam = 0;
    int b;
    b = 1;
    while (b <= a) {
        toplam = b + toplam;
        b = b + 1;
    }
    printf ("Toplamın sonucu: %d\n", toplam);
    return 0;
}
