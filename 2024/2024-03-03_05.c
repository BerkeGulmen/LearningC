#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e;
    printf ("Satırı gir: ");
    scanf ("%d", &a);
    printf ("Sütunu gir: ");
    scanf ("%d", &c);
    int b [a] [c];
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%d. satırı %d. sütunu gir: ", d, e);
            scanf ("%d", &b [d] [e]);
            b [d] [e] = (b [d] [e]) * 2;
        }
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%d ",  b [d] [e]);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
