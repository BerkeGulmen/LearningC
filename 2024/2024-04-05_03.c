//2 matrixi pointer ile çarpma.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e, f, g;
    printf ("1. matrixin satırı kaç? ");
    scanf ("%d", &a);
    printf ("2. matrixin sütunu kaç? ");
    scanf ("%d", &b);
    printf ("1. matrixin sütunu ve 2. matrixin satırı kaç? ");
    scanf ("%d", &c);
    int ** k, ** x, ** z;
    int s [a] [c];
    int h [c] [b];
    k = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (k + d) = (int *) calloc (c, sizeof (int));
    }
    x = (int **) calloc (c, sizeof (int *));
    for (d = 0; d < c; ++ d) {
        * (x + d) = (int *) calloc (b, sizeof (int));
    }
    z = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (z + d) = (int *) calloc (b, sizeof (int));
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("1. matrixin %d. satır %d. sütununu gir: ", d, e);
            scanf ("%d", &s [d] [e]);
            * (* (k + d) + e) = s [d] [e];
        }
    }
    for (d = 0; d < c; ++ d) {
        for (e = 0; e < b; ++ e) {
            printf ("2. matrixin %d. satır %d. sütununu gir: ", d, e);
            scanf ("%d", &h [d] [e]);
            * (* (x + d) + e) = h [d] [e];
        }
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < b; ++ e) {
            for (f = 0, g = 0; g < c; ++ g) {
                f += * (* (k + d) + g) * * (* (x + g) + e);
            }
            * (* (z + d) + e) = f;
        }
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < b; ++ e) {
            printf ("%d ", * (* (z + d) + e));
        }
        printf ("\n");
    }
    for (d = 0; d < a; ++ d) {
        free (* (k + d));
    }
    free (k);
    for (d = 0; d < c; ++ d) {
        free (* (x + d));
    }
    free (x);
    for (d = 0; d < a; ++ d) {
        free (* (z + d));
    }
    free (z);
    return EXIT_SUCCESS;
}
