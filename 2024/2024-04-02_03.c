//Matrixi silip birleştirme.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e, f;
    printf ("Satırı gir: ");
    scanf ("%d", &a);
    printf ("Sütunu gir: ");
    scanf ("%d", &b);
    int x [a] [b];
    int ** s;
    s = (int **) calloc (a, sizeof (int *));
    for (c = 0; c < a; ++ c) {
        * (s + c) = (int *) calloc (b, sizeof (int));
    }
    int ** z;
    z = (int **) calloc ((a - 1), sizeof (int *));
    for (c = 0; c < (a - 1); ++ c) {
        * (z + c) = (int *) calloc ((b - 1), sizeof (int));
    }
    for (c = 0; c < a; ++ c) {
        for (d = 0; d < b; ++ d) {
            printf ("%d. satır %d. sütunu gir: ", c, d);
            scanf ("%d", &x [c] [d]);
            * (* (s + c) + d) = x [c] [d];
        }
    }
    printf ("Hangi satırı sileyim? ");
    scanf ("%d", &e);
    printf ("Hangi sütunu sileyim? ");
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
                * (* (z + c) + d) = * (* (s + c) + d);
            }
            if (c < e && d > f) {
                * (* (z + c) + d - 1) = * (* (s + c) + d);
            }
            if (c > e && d < f) {
                * (* (z + c - 1) + d) = * (* (s + c) + d);
            }
            if (c > e && d > f) {
                * (* (z + c - 1) + d - 1) = * (* (s + c) + d);
            }
        }
    }
    for (c = 0; c < (a - 1); ++ c) {
        for (d = 0; d < (b - 1); ++ b) {
            printf ("%d ", * (* (z + c) + d));
        }
        printf ("\n");
    }
    for (c = 0; c < (a - 1); ++ c) {
        free (* (z + c));
    }
    free (z);
    for (c = 0; c < a; ++ c) {
        free (* (s + c));
    }
    free (s);
    return EXIT_SUCCESS;
}
