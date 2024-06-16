/*
Kullanıcı saat ve dakika bilgilerini girsin. Analog saatte o saat anı için akrep ve yelkovan arasında oluşan dar açıyı bulup
ekrana yazdır.
 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, d, e;
    double f;
    printf ("Kaç tane sayı? ");
    scanf ("%d", &a);
    for (b = 0, d = 0, f = 0, e = 0; b < a; ++ b) {
        printf ("Sayı gir: ");
        scanf ("%d", &e);
        d += e;
    }
    f = ((double) d / (double) a);
    printf ("Kolaydı: %lf\n", f);
    return EXIT_SUCCESS;
}
