#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, sonuc;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    for (sonuc = 0; a > 0; -- a) {
        sonuc += b;
    }
    printf ("Çarpımın sonucu: %d\n", sonuc);
    return EXIT_SUCCESS;
}
