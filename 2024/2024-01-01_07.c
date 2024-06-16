#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, toplam, c, d;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    if (a < b) {
        d = b;
        c = a;
    }
    else {
        d = a;
        c = b;
    }
    for (toplam = 0; c < d; ++ c) {
        if ((c % 2) != 0 || (c % 2) == 1) {
            printf ("%d\n", c);
        }
        if ((c % 2) != 1 || (c % 2) == 0) {
            toplam += c;
        }
    }
    printf ("Girdiğiniz 2 sayının arasındaki çift sayıların toplamının sonucu: %d\n", toplam);
    return EXIT_SUCCESS;
}
