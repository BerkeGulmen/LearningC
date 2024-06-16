#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e , f, g, j;
    printf ("1. matrixin satırını gir: ");
    scanf ("%d", &a);
    printf ("2. matrixin sütununu gir: ");
    scanf ("%d", &c);
    printf ("Ortak 1. matrixin sütununu 2. matrixin satırını gir: ");
    scanf ("%d", &d);
    int b [a] [d];
    int h [d] [c];
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < d; ++ f) {
            printf ("%d. satır %d. sütunu gir: ", e, f);
            scanf ("%d", &b [e] [f]);
        }
    }
    for (e = 0; e < d; ++ e) {
        for (f = 0; f < c; ++ f) {
            printf ("%d. satır %d. sütunu gir: ", e, f);
            scanf ("%d", &h [e] [f]);
        }
    }
    int x [a] [c];
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < c; ++ f) {
            for (g = 0, j = 0; g < d; ++ g) {
                j += x [e] [g] * x [c] [g];
            }
            x [e] [f] = j;
        }
    }
    for (e = 0; e < a; ++ e) {
        for (f = 0; f < c; ++ f) {
            printf ("%d", x [e] [f]);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
