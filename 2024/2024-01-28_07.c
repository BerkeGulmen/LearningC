/*
 Toplamı hesaplayıp ekrana yazdır.
 (1 / (N - 0)) + (2 / (N - 1)) + (3 / (N - 2)) + (4 / (N - 3)) + ... + (N / 1)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    double a, b, c, d;
    printf ("Sayı gir: ");
    scanf ("%lf", &a);
    for (b = 1, c = 0, d = 0; b <= a; ++b, ++ c) {
        d += (b / (a - c));
    }
    printf ("Sonuç: %lf\n", d);
    return EXIT_SUCCESS;
}
