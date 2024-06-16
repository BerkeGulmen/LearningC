/*
Kullanıcı saat ve dakika bilgilerini girsin. Analog saatte o saat anı için akrep ve yelkovan arasında oluşan dar açıyı bulup ekrana yazdır.
 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    double a, b, aci, c, d;
    printf ("Dakika gir: ");
    scanf ("%lf", &a);
    printf ("Saat gir: ");
    scanf ("%lf", &b);
    c = a * 6;
    d = (b * 30) + (a * 0.5);
    aci = c - d;
    if (aci < 0) {
        aci *= - 1;
    }
    if (aci > 180) {
        aci = 360 - aci;
    }
    printf ("Dar açının sonucu ve ortaydı: %lf\n", aci);
    return EXIT_SUCCESS;
}
