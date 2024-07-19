/*
İç içe iki sigma (toplam) için başlangıç ve hedef değerleri kullanıcıdan al. (i + j) sonucunu ekrana yazdır.
Dıştaki sigmanın başlangıcı i: 2, dıştaki sigmanın hedefi k: 3, içteki sigmanın başlangıcı j: 4, içteki sigmanın bitişi m: 5
olsun. Sonuc: 28
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e, f;
    scanf ("%d %d %d %d%*c", &a, &b, &c, &d);
    for (e = 0, f = c; a <= b; ++ a) {
        for (c = f; c <= d; ++ c) {
            e += a + c;
        }
    }
    printf ("%d\n", e);
    return EXIT_SUCCESS;
}
