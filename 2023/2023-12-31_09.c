#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, f, toplam;
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
    for (f = c, toplam = 0; f < d; ++ f) {
        if ((f % 2) == 0 || (f % 2) != 1) {
            toplam += f;
        }
    }
    printf ("Çift sayıların toplamların sonucu: %d\n", toplam);
    return EXIT_SUCCESS;
}
