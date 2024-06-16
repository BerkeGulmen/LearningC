#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    for (c = 0, d = 0; c < a; ++ c) {
        d += b;
    }
    printf ("Çarpma işleminin sonucu: %d\n", d);
    return EXIT_SUCCESS;
}
