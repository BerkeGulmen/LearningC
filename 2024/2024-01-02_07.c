#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, toplam;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    if (a < b) {
        c = a;
        d = b;
    }
    else {
        c = b;
        d = a;
    }
    for (toplam = 0; c < d; ++ c) {
        if ((c % 2) != 0 && (c % 2) == 1) {
            printf ("%d\n", c);
        }
        if ((c % 2) != 1 && (c % 2) == 0) {
            toplam += a;
        }
    }
    printf ("Çift sayıların toplamı: %d\n", toplam);
    return EXIT_SUCCESS;
}
