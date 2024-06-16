#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, e, g, h;
    printf ("1. dizi kaç elemanlı? ");
    scanf ("%d", &a);
    printf ("2. dizi kaç elemanlı? ");
    scanf ("%d", &b);
    int c [a];
    int d [b];
    for (e = 0; e < a; ++ e) {
        printf ("1. dizinin %d. elemanını gir: ", e);
        scanf ("%d", &c [e]);
    }
    for (e = 0; e < b; ++ e) {
        printf ("2. dizinin %d. elemanını gir: ", e);
        scanf ("%d", &d [e]);
    }
    int *f;
    f = (int *) calloc (a + b, sizeof (int));
    for (e = 0; e < a; ++ e) {
        * (f + e) = c [e];
    }
    for (e = a, b += a, g = 0; e < b; ++ e, ++ g) {
        * (f + e) = d [g];
    }
    for (e = 0; e < b - 1; ++ e) {
        for (g = e + 1; g < b; ++ g) {
            if (* (f + g) < * (f + e)) {
                h = * (f + g);
                * (f + g) = * (f + e);
                * (f + e) = h;
            }
        }
    }
    printf ("Küçükten büyüğe doğru sıralanışı: ");
    for (e = 0; e < b; ++ e) {
        printf ("%d ", * (f + e));
    }
    return EXIT_SUCCESS;
}
