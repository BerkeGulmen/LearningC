#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f, g;
    printf ("Matrixin satırını gir: ");
    scanf ("%d", &a);
    printf ("Matrixin sütununu gir: ");
    scanf ("%d", &c);
    int b [a] [c];
    int ** x;
    int ** k;
    k = (int **) calloc ((a - 1), sizeof (int *));
    for (d = 0; d < (a - 1); ++ d) {
        * (k + d) = (int *) calloc ((c - 1), sizeof (int));
    }
    x = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (x + d) = (int *) calloc (c, sizeof (int));
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%d. satır %d. sütunu gir: ", d, e);
            scanf ("%d", &b [d] [e]);
            * (* (x + d) + e) = b [d] [e];
        }
    }
    printf ("Satır: ");
    scanf ("%d", &f);
    printf ("Sütun: ");
    scanf ("%d", &g);
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            if (d == f) {
                break;
            }
            if (e == g) {
                continue;
            }
            if (d < f && e < g) {
                * (* (k + d) + e) = * (* (x + d) + e);
            }
            if (d < f && e > g) {
                * (* (k + d) + (e - 1)) = * (* (x + d) + e);
            }
            if (d > f && e < g) {
                * (* (k + (d - 1)) + e) = * (* (x + d) + e);
            }
            if (d > f && e > g) {
                * (* (k + (d - 1)) + (e - 1)) = * (* (x + d) + e);
            }
        }
    }
    for (d = 0; d < (a - 1); ++ d) {
        for (e = 0; e < (c - 1); ++ e) {
            printf ("%d ", * (* (k + d) + e));
        }
        printf ("\n");
    }
    for (d = 0; d < (a - 1); ++ d) {
        free (* (k + d));
    }
    free (k);
    for (d = 0; d < a; ++ d) {
        free (* (x + d));
    }
    free (x);
    return EXIT_SUCCESS;
}
