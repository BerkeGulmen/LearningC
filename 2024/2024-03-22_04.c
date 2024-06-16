//2 matrixi çarpma.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f, g, j;
    printf ("1. matrixin satırını gir: ");
    scanf ("%d", &a);
    printf ("2. matrixin sütununu gir: ");
    scanf ("%d", &c);
    printf ("1. matrixin sütununu 2. matrixin satırını gir: ");
    scanf ("%d", &d);
    int b [a] [d];
    int h [d] [c];
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < d; ++ f) {
            printf ("1. matrixin %d. satırını %d. sütununu gir: ", e, f);
            scanf ("%d", &b [e] [f]);
        }
    }
    for (e = 0; e < d; ++ e) {
        for (f = 0; f < c; ++ f) {
            printf ("2. matrixin %d. satırını %d. sütununu gir: ", e, f);
            scanf ("%d", &h [e] [f]);
        }
    }
    int ** k;
    k = (int **) calloc (a, sizeof (int *));
    for (e = 0; e < a; ++ e) {
        * (k + e) = (int *) calloc (c, sizeof (int));
    }
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < c; ++ f) {
            for (g = 0, j = 0; g < d; ++ g) {
                j += b [e] [g] * h [g] [f];
            }
            * (* (k + e) + f) = j;
        }
    }
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < c; ++ f) {
            printf ("%d ", * (* (k + e) + f));
        }
        printf ("\n");
    }
    printf ("\n");
    for (e = 0; e < a; ++ e) {
        free (* (k + e));
    }
    free (k);
    return EXIT_SUCCESS;
}
