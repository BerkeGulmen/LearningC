//2 tane 1 boyutlu dizinin ortak elemanını pointer ile ekrana yazdırma.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, e, f;
    printf ("1. dizi kaç elemanlı? ");
    scanf ("%d", &a);
    printf ("2. dizi kaç elemanlı? ");
    scanf ("%d", &b);
    int c [a];
    int d [b];
    int * k;
    int * o;
    k = (int *) calloc (a, sizeof (int));
    o = (int *) calloc (b, sizeof (int));
    for (e = 0; e < a; ++ e) {
        printf ("1. dizinin %d. elemanını gir: ", e);
        scanf ("%d", &c [e]);
        * (k + e) = c [e];
    }
    for (e = 0; e < b; ++ e) {
        printf ("2. dizinin %d. elemanını gir: ", e);
        scanf ("%d", &d [e]);
        * (o + e) = d [e];
    }
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < b; ++ f) {
            if (* (k + e) == * (o + f)) {
                printf ("%d ", * (k + e));
            }
        }
    }
    printf ("\n");
    free (k);
    free (o);
    return EXIT_SUCCESS;
}
