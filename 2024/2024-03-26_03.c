//2 pointer dizisini çarpma.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f, g, j;
    printf ("1. matrixin satırı gir: ");
    scanf ("%d", &a);
    printf ("2. matrixin sütunu gir: ");
    scanf ("%d", &c);
    printf ("1. matrixin sütununu gir 2. matrixin satırını gir: ");
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
    int ** k, ** x, ** z;
    k = (int **) calloc (a, sizeof (int *));
    for (e = 0; e < a; ++ e) {
        * (k + e) = (int *) calloc (d, sizeof (int));
    }
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < d; ++ f) {
            * (* (k + e) + f) = b [e] [f];
        }
    }
    x = (int **) calloc (d, sizeof (int *));
    for (e = 0; e < d; ++ e) {
        * (x + e) = (int *) calloc (c, sizeof (int));
    }
    for (e = 0; e < d; ++ e) {
        for (f = 0; f < c; ++ f) {
            * (* (x + e) + f) = h [e] [f];
        }
    }
    z = (int **) calloc (a, sizeof (int *));
    for (e = 0; e < a; ++ e) {
        * (z + e) = (int *) calloc (c, sizeof (int));
    }
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < c; ++ f) {
            for (g = 0, j = 0; g < d; ++ g) {
                j += * (* (k + e) + g) * * (* (x + g) + f);
            }
            * (* (z + e) + f) = j;
        }
    }
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < c; ++ f) {
            printf ("%d ", * (* (z + e) + f));
        }
        printf ("\n");
    }
    for (e = 0; e < d; ++ e) {
        free (* (x + e));
    }
    free (x);
    for (e = 0; e < a; ++ e) {
        free (* (k + e));
        free (* (z + e));
    }
    free (k);
    free (z);
    return EXIT_SUCCESS;
}
