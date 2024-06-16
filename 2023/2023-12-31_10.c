#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, carpim, f;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    for (carpim = 0, f = 0; f < a; ++ f) {
        carpim += b;
    }
    printf ("Çarpımın sonucu: %d\n", carpim);
    return EXIT_SUCCESS;
}
