/*
 İç içe iki sigma (toplam) için başlangıç ve hedef değerleri kullanıcıdan al. (i + j) sonucunu ekrana yazdır.
 Dıştaki sigmanın başlangıcı i: 2, dıştaki sigmanın hedefi k: 3, içteki sigmanın başlangıcı j: 4, içteki sigmanın bitişi m: 5 olsun. Sonuc: 28
 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e, f;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    printf ("1. sayının hedefini gir: ");
    scanf ("%d", &c);
    printf ("2. sayının hedefini gir: ");
    scanf ("%d", &d);
    for (e = 0, f = b; a <= c; ++ a) {
        for (b = f; b <= d; ++ b) {
            e += a + b;
        }
    }
    printf ("Kolaydı: %d\n", e);
    return EXIT_SUCCESS;
}
