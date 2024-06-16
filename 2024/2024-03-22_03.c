//2 boyutlu dizi pointer dizi silip birleştirme.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f, g;
    printf ("Satırı gir: ");
    scanf ("%d", &a);
    printf ("Sütunu gir: ");
    scanf ("%d", &c);
    int b [a] [c];
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%d. satır %d. sütunu gir: ", d, e);
            scanf ("%d", &b [d] [e]);
        }
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%d ", b [d] [e]);
        }
        printf ("\n");
    }
    int ** k;
    k = (int **) calloc ((a - 1), sizeof (int *));
    for (d = 0; d < (a - 1); ++ d) {
        * (k + d) = (int *) calloc ((c - 1), sizeof (int));
    }
    printf ("Hangi satır? ");
    scanf ("%d", &f);
    printf ("Hangi sütun? ");
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
                * (* (k + d) + e) = b [d] [e];
            }
            if (d < f && e > g) {
                * (* (k + d) + (e - 1)) = b [d] [e];
            }
            if (d > f && e < g) {
                * (* (k + (d - 1)) + e) = b [d] [e];
            }
            if (d > f && e > g) {
                * (* (k + (d - 1)) + (e - 1)) = b [d] [e];
            }
        }
    }
    for (d = 0; d < (a - 1); ++ d) {
        for (e = 0; e < (c - 1); ++ e) {
            printf ("%d ", * (* (k + d) + e));
        }
        printf ("\n");
    }
    printf ("\n");
    for (d = 0; d < (a - 1); ++ d) {
        free (* (k + d));
    }
    free (k);
    return EXIT_SUCCESS;
}
