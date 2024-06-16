//2 matrixi pointer ile çarpma.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e, f, g;
    printf ("1. matrixin satırı? ");
    scanf ("%d", &a);
    printf ("2. matrixin sütunu? ");
    scanf ("%d", &b);
    printf ("1. matrixin sütunu 2. matrixin satırı? ");
    scanf ("%d", &c);
    int s [a] [c];
    int k [c] [b];
    int ** x, ** j, ** z;
    z = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (z + d) = (int *) calloc (c, sizeof (int));
    }
    j = (int **) calloc (c, sizeof (int *));
    for (d = 0; d < c; ++ d) {
        * (j + d) = (int *) calloc (b, sizeof (int));
    }
    x = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (x + d) = (int *) calloc (b, sizeof (int));
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("1. matrixin %d. satır %d. sütununu gir: ", d, e);
            scanf ("%d", &s [d] [e]);
            * (* (z + d) + e) = s [d] [e];
        }
    }
    for (d = 0; d < c; ++ d) {
        for (e = 0; e < b; ++ e) {
            printf ("2. matrixin %d. satır %d. sütununu gir: ", d, e);
            scanf ("%d", &k [d] [e]);
            * (* (j + d) + e) = k [d] [e];
        }
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < b; ++ e) {
            for (f = 0, g = 0; f < c; ++ f) {
                g += * (* (z + d) + f) * * (* (j + f) + e);
            }
            * (* (x + d) + e) = g;
        }
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < b; ++ e) {
            printf ("%d ", * (* (x + d) + e));
        }
        printf ("\n");
    }
    for (d = 0; d < a; ++ d) {
        free (* (x + d));
    }
    free (x);
    for (d = 0; d < a; ++ d) {
        free (* (z + d));
    }
    free (z);
    for (d = 0; d < c; ++ d) {
        free (* (j + d));
    }
    free (j);
    return EXIT_SUCCESS;
}
