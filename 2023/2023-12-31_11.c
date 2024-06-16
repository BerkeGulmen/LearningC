#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, f;
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
    for (f = 0; d > c; ++ f) {
        d -= c;
    }
    printf ("Bölümün sonucu: %d\n", f);
    printf ("Kalanın sonucu: %d\n", d);
    return EXIT_SUCCESS;
}
