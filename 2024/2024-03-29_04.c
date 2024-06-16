//2 matrixi çarpma.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e, f, g;
    printf ("1. matrixin satırını gir: ");
    scanf ("%d", &a);
    printf ("2. matrixin sütununu gir: ");
    scanf ("%d", &b);
    printf ("1. matrixin sütununu 2. matrixin satırını gir: ");
    scanf ("%d", &c);
    int s [a] [c];
    int k [c] [b];
    int ** x, ** j, ** z;
    x = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (x + d) = (int *) calloc (c, sizeof (int));
    }
    j = (int **) calloc (c, sizeof (int *));
    for (d = 0; d < c; ++ d) {
        * (j + d) = (int *) calloc (b, sizeof (int));
    }
    z = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (z + d) = (int *) calloc (b, sizeof (int));
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("1. matrixin %d. satırı %d. sütunu gir: ", d, e);
            scanf ("%d", &s [d] [e]);
            * (* (x + d) + e) = s [d] [e];
        }
    }
    for (d = 0; d < c; ++ d) {
        for (e = 0; e < b; ++ e) {
            printf ("2. matrixin %d. satırı %d. sütunu gir: ", d, e);
            scanf ("%d", &k [d] [e]);
            * (* (j + d) + e) = k [d] [e];
        }
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < b; ++ e) {
            for (f = 0, g = 0; g < c; ++ g) {
                f += * (* (x + d) + g) * * (* (j + g) + e);
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
        free (* (z + d));
    }
    free (z);
    for (d = 0; d < c; ++ d) {
        free (* (j + d));
    }
    free (j);
    for (d = 0; d < a; ++ d) {
        free (* (x + d));
    }
    free (x);
    return EXIT_SUCCESS;
}
