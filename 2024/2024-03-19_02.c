#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e;
    printf ("Matrixin satırını gir: ");
    scanf ("%d", &a);
    printf ("Matrixin sütununu gir: ");
    scanf ("%d", &c);
    int b [a] [c];
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("Matrixin %d. satırını %d. sütununu gir: ", d, e);
            scanf ("%d", &b [d] [e]);
        }
    }
    int **f = (int **) malloc (a * sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (f + d) = (int *) malloc (c * sizeof (int));
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            * (* (f + d) + e) = b [d] [e];
        }
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%d ", * (* (f + d) + e));
        }
        printf ("\n");
    }
    printf ("\n");
    for (d = 0; d < a; ++ d) {
        free (* (f + d));
    }
    free (f);
    return EXIT_SUCCESS;
}
