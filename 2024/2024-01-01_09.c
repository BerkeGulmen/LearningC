#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e;
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
    for (e = 0; c < d; ++ e) {
        d -= c;
    }
    printf ("Bölümün sonucu: %d\n", e);
    printf ("Kalanın sonucu: %d\n", d);
    return EXIT_SUCCESS;
}
