#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int c, d, e, f;
    printf ("Satırı gir: ");
    scanf ("%d", &d);
    printf ("Sütunu gir: ");
    scanf ("%d", &c);
    int a [d] [c];
    for (e = 0; e < d; ++ e) {
        for (f = 0; f < c; ++ f) {
            printf ("%d. satırı %d. sütunu gir: ", e, f);
            scanf ("%d", &a [e] [f]);
        }
    }
    int b [c] [d];
    for (e = 0; e < c; ++ e) {
        for (f = 0; f < d; ++ f) {
            b [e] [f] = a [f] [e];
        }
    }
    for (e = 0; e < c; ++ e) {
        for (f = 0; f < d; ++ f) {
            printf ("%d ", b [e] [f]);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
