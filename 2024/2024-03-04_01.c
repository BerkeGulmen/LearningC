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
            printf ("%d. satırı %d. sütunu gir: ", d, e);
            scanf ("%d", &b [d] [e]);
        }
    }
    printf ("Hangi satırı istemiyon? ");
    scanf ("%d", &f);
    printf ("Hangi sütunu istemiyon? ");
    scanf ("%d", &g);
    int x [a - 1] [c - 1];
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            if (f == d) {
                break;
            }
            if (g == e) {
                continue;
            }
            if (e < g && d < f) {
                x [d] [e] = b [d] [e];
            }
            if (e > g && d < f) {
                x [d] [e - 1] = b [d] [e];
            }
            if (d > f && e < g) {
                x [d - 1] [e] = b [d] [e];
            }
            if (d > f && e > g) {
                x [d - 1] [e - 1] = b [d] [e];
            }
        }
    }
    for (d = 0; d < (a - 1); ++ d) {
        for (e = 0; e < (c - 1); ++ e) {
            printf ("%d ", x [d] [e]);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
