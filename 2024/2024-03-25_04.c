//pointer dizisini silip birleştirme.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f, g;
    printf ("Satır: ");
    scanf ("%d", &a);
    printf ("Sütun: ");
    scanf ("%d", &c);
    int b [a] [c];
    int ** k;
    k = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (k + d) = (int *) calloc (c, sizeof (int));
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%d. satır %d. sütun gir: ", d, e);
            scanf ("%d", &b [d] [e]);
            * (* (k + d) + e) = b [d] [e];
        }
    }
    int ** x;
    x = (int **) calloc ((a - 1), sizeof (int *));
    for (d = 0; d < (a - 1); ++ d) {
        * (x + d) = (int *) calloc ((c - 1), sizeof (int));
    }
    printf ("Hangi satır? ");
    scanf ("%d", &f);
    printf ("Hangi sütun? ");
    scanf ("%d", &g);
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ c) {
            if (d == f) {
                break;
            }
            if (e == g) {
                continue;
            }
            if (d < f && e < g) {
                * (* (x + d) + e) = * (* (k + d) + e);
            }
            if (d < f && e > g) {
                * (* (x + d) + (e - 1)) = * (* (k + d) + e);
            }
            if (d > f && e < g) {
                * (* (x + (d - 1)) + e) = * (* (k + d) + e);
            }
            if (d > f && e > g) {
                * (* (x + (d - 1)) + (e - 1)) = * (* (k + d) + e);
            }
        }
    }
    for (d = 0; d < (a - 1); ++ d) {
        for (e = 0; e < (c - 1); ++ e) {
            printf ("%d ", * (* (x + d) + e));
        }
        printf ("\n");
    }
    for (d = 0; d < a; ++ d) {
        free (* (k + d));
    }
    free (k);
    for (d = 0; d < (a - 1); ++ d) {
        free (* (x + d));
    }
    free (x);
    return EXIT_SUCCESS;
}
