//2 boyutlu diziyi pointerle silip birleştirme.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e, f;
    printf ("Matrixin satırı? ");
    scanf ("%d", &a);
    printf ("Matrixin sütunu? ");
    scanf ("%d", &b);
    int g [a] [b];
    int ** k;
    k = (int **) calloc (a, sizeof (int *));
    for (c = 0; c < a; ++ c) {
        * (k + c) = (int *) calloc (b, sizeof (int));
    }
    int ** x;
    x = (int **) calloc ((a - 1), sizeof (int *));
    for (c = 0; c < (a - 1); ++ c) {
        * (x + c) = (int *) calloc ((b - 1), sizeof (int));
    }
    for (c = 0; c < a; ++ c) {
        for (d = 0; d < b; ++ d) {
            printf ("%d. satır %d. sütunu gir: ", c, d);
            scanf ("%d", &g [c] [d]);
            * (* (k + c) + d) = g [c] [d];
        }
    }
    printf ("Hangi satırı girmiyecen? ");
    scanf ("%d", &e);
    printf ("Hangi sütunu girmiyecen? ");
    scanf ("%d", &f);
    for (c = 0; c < a; ++ c) {
        for (d = 0; d < b; ++ d) {
            if (c == e) {
                break;
            }
            if (d == f) {
                continue;
            }
            if (c < e && d < f) {
                * (* (x + c) + d) = * (* (k + c) + d);
            }
            if (c < e && d > f) {
                * (* (x + c) + d - 1) = * (* (k + c) + d);
            }
            if (c > e && d < f) {
                * (* (x + c - 1) + d) = * (* (k + c) + d);
            }
            if (c > e && d > f) {
                * (* (x + c - 1) + d - 1) = * (* (k + c) + d);
            }
        }
    }
    for (c = 0; c < (a - 1); ++ c) {
        for (d = 0; d < (b - 1); ++ d) {
            printf ("%d ", * (* (x + c) + d));
        }
        printf ("\n");
    }
    for (c = 0; c < a; ++ c) {
        free (* (k + c));
    }
    free (k);
    for (c = 0; c < (a - 1); ++ c) {
        free (* (x + c));
    }
    free (x);
    return EXIT_SUCCESS;
}
