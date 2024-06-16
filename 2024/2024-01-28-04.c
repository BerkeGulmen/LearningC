/*
 Toplam, 1'den N'e kadar, 1/N hesapla ve sonucu ekrana yazdır.
 (1 / 1) + (1 / 2) + (1 / 3) + (1 / 4) + (1 / 5) ... + (1 / N)
 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    double a, b, c, d;
    printf ("Sayı gir: ");
    scanf ("%lf", &a);
    for (b = 0, c = 0, d = 1; c < a; ++ c, ++ d) {
        b += (1 / d);
    }
    printf ("1'den N'ye kadar olan sayıların 1 / N'nin toplamının sonucu: %lf\n", b);
    return EXIT_SUCCESS;
}
