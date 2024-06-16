//Matrixi silip birleştirme.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e, f;
    printf ("Matrixin satırını gir: ");
    scanf ("%d", &a);
    printf ("Matrixin sütununu gir: ");
    scanf ("%d", &b);
    int s [a] [b];
    int ** x;
    x = (int **) calloc (a, sizeof (int *));
    for (c = 0; c < a; ++ c) {
        * (x + c) = (int *) calloc (b, sizeof (int));
    }
    for (c = 0; c < a; ++ c) {
        for (d = 0; d < b; ++ d) {
            printf ("%d. satır %d. sütunu gir: ", c, d);
            scanf ("%d", &s [c] [d]);
            * (* (x + c) + d) = s [c] [d];
        }
    }
    int ** k;
    k = (int **) calloc ((a - 1), sizeof (int *));
    for (c = 0; c < (a - 1); ++ c) {
        * (k + c) = (int *) calloc ((b - 1), sizeof (int));
    }
    printf ("Hangi satırı istemiyorsun? ");
    scanf ("%d", &e);
    printf ("Hangi sütunu istemiyorsun? ");
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
                * (* (k + c) + d) = * (* (x + c) + d);
            }
            if (c < e && d > f) {
                * (* (k + c) + d - 1) = * (* (x + c) + d);
            }
            if (c > e && d < f) {
                * (* (k + c - 1) + d) = * (* (x + c) + d);
            }
            if (c > e && d > f) {
                * (* (k + c - 1) + d - 1) = * (* (x + c) + d);
            }
        }
    }
    for (c = 0; c < (a - 1); ++ c) {
        for (d = 0; d < (b - 1); ++ d) {
            printf ("%d ", * (* (k + c) + d));
        }
        printf ("\n");
    }
    for (c = 0; c < (a - 1); ++ c) {
        free (* (k + c));
    }
    free (k);
    for (c = 0; c < a; ++ c) {
        free (* (x + c));
    }
    free (x);
    return EXIT_SUCCESS;
}
