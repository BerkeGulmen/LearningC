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
    int h [a] [c];
    int j [c] [b];
    int ** o;
    int ** r;
    o = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (o + d) = (int *) calloc (c, sizeof (int));
    }
    r = (int **) calloc (c, sizeof (int *));
    for (d = 0; d < c; ++ d) {
        * (r + d) = (int *) calloc (b, sizeof (int));
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%d. satırı %d. sütunu gir: ", d, e);
            scanf ("%d", &h [d] [e]);
            * (* (o + d) + e) = h [d] [e];
        }
    }
    for (d = 0; d < c; ++ d) {
        for (e = 0; e < b; ++ e) {
            printf ("%d. satırı %d. sütunu gir: ", d, e);
            scanf ("%d", &j [d] [e]);
            * (* (r + d) + e) = j [d] [e];
        }
    }
    int ** s;
    s = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (s + d) = (int *) calloc (b, sizeof (int));
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < b; ++ e) {
            for (f = 0, g = 0; f < c; ++ f) {
                g += * (* (o + d) + f) * * (* (r + f) + e);
            }
            * (* (s + d) + e) = g;
        }
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < b; ++ e) {
            printf ("%d ", * (* (s + d) + e));
        }
        printf ("\n");
    }
    for (d = 0; d < a; ++ d) {
        free (* (s + d));
    }
    free (s);
    for (d = 0; d < c; ++ d) {
        free (* (r + d));
    }
    free (r);
    for (d = 0; d < a; ++ d) {
        free (* (o + d));
    }
    free (o);
    return EXIT_SUCCESS;
}
