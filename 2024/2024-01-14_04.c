#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int e, a, b, c, d;
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
    for (e = 0; c < d; ++ e) {
        d -= c;
    }
    printf ("Bölümün sonucu: %d\n", e);
    printf ("Kalanın sonucu: %d\n", d);
    return EXIT_SUCCESS;
}
