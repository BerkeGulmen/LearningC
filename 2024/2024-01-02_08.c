#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, toplam, c;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    for (toplam = 0, c = 0; c < b; ++ c) {
        toplam += a;
    }
    printf ("Çarpımın sonucu: %d\n", toplam);
    return EXIT_SUCCESS;
}
