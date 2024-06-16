/*
Toplam, 1'den N'ye kadar, 1/N hesapla ve sonucu ekrana yazdır.
(1 / 1) + (1 / 2) + (1 / 3) + (1 / 4) + (1 / 5) ... + (1 / N)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    double toplam, n, a, b;
    printf ("Sayı gir: ");
    scanf ("%lf", &n);
    for (toplam = 0, a = 0, b = 1; a < n; ++ a, ++ b) {
        toplam += 1 / b;
    }
    printf ("Sonuç: %lf'dır\n", toplam);
    return EXIT_SUCCESS;
}
