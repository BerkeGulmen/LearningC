#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f, g, s;
    printf ("1. matrixin satırını gir: ");
    scanf ("%d", &a);
    printf ("2. matrixin sütununu gir: ");
    scanf ("%d", &c);
    printf ("1. ve 2. matrixin ortak sayısını gir: ");
    scanf ("%d", &d);
    int b [a] [d];
    int h [d] [c];
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < d; ++ f) {
            printf ("1. matrixin %d. satırı %d. sütununu gir: ", e, f);
            scanf ("%d", &b [e] [f]);
        }
    }
    for (e = 0; e < d; ++ e) {
        for (f = 0; f < c; ++ f) {
            printf ("2. matrixin %d. satırı %d. sütununu gir: ", e, f);
            scanf ("%d", &h [e] [f]);
        }
    }
    int x [a] [c];
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < c; ++ f) {
            for (g = 0, s = 0; s < d; ++ s) {
                g += b [e] [s] * h [s] [f];
            }
            x [e] [f] = g;
        }
    }
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < d; ++ f) {
            printf ("%d ", x [e] [f]);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
