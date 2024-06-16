//2 boyutlu dizide silip birleştirmeyi pointerle yapma.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e, f;
    printf ("Satırı kaç? ");
    scanf ("%d", &a);
    printf ("Sütunu kaç? ");
    scanf ("%d", &b);
    int r [a] [b];
    int ** o;
    o = (int **) calloc (a, sizeof (int *));
    for (c = 0; c < a; ++ c) {
        * (o + c) = (int *) calloc (b, sizeof (int));
    }
    for (c = 0; c < a; ++ c) {
        for (d = 0; d < b; ++ d) {
            printf ("%d. satır %d. sütunu gir: ", c, d);
            scanf ("%d", &r [c] [d]);
            * (* (o + c) + d) = r [c] [d];
        }
    }
    int ** s;
    s = (int **) calloc ((a - 1), sizeof (int *));
    for (c = 0; c < (a - 1); ++ c) {
        * (s + c) = (int *) calloc ((b - 1), sizeof (int));
    }
    printf ("Satır? ");
    scanf ("%d", &e);
    printf ("Sütun? ");
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
                * (* (s + c) + d) = * (* (o + c) + d);
            }
            if (c < e && d > f) {
                * (* (s + c) + d - 1) = * (* (o + c) + d);
            }
            if (c > e && d < f) {
                * (* (s + c - 1) + d) = * (* (o + c) + d);
            }
            if (c > e && d > f) {
                * (* (s + c - 1) + d - 1) = * (* (o + c) + d);
            }
        }
    }
    for (c = 0; c < (a - 1); ++ c) {
        for (d = 0; d < (b - 1); ++ d) {
            printf ("%d ", * (* (s + c) + d));
        }
        printf ("\n");
    }
    for (c = 0; c < (a - 1); ++ c) {
        free (* (s + c));
    }
    free (s);
    for (c = 0; c < a; ++ c) {
        free (* (o + c));
    }
    free (o);
    return EXIT_SUCCESS;
}
