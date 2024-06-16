//2 matrixi çarpma.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f, g, j;
    printf ("1. dizinin satırı ne? ");
    scanf ("%d", &a);
    printf ("2. dizinin sütunu ne? ");
    scanf ("%d", &c);
    printf ("1. dizinin sütunu ve 2. dizinin satırı ne? ");
    scanf ("%d", &d);
    int b [a] [d];
    int h [d] [c];
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < d; ++ f) {
            printf ("1. dizinin %d. satırını %d. sütununu gir: ", e, f);
            scanf ("%d", &b [e] [f]);
        }
    }
    for (e = 0; e < d; ++ e) {
        for (f = 0; f < c; ++ f) {
            printf ("2. dizinin %d. satırını %d. sütununu gir: ", e, f);
            scanf ("%d", &h [e] [f]);
        }
    }
    int x [a] [c];
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < c; ++ f) {
            for (g = 0, j = 0; g < d; ++ g) {
                j += b [e] [g] * h [g] [f];
            }
            x [e] [f] = j;
        }
    }
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < c; ++ f) {
            printf ("%d ", x [e] [f]);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
