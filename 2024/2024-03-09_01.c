#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e;
    printf ("2 dizinin satırı kaç? ");
    scanf ("%d", &a);
    printf ("2 dizinin sütunu kaç? ");
    scanf ("%d", &c);
    int b [a] [c];
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("1. dizinin %d. satırı gir, %d. sütunu gir: ", d, e);
            scanf ("%d", &b [d] [e]);
        }
    }
    int f [a] [c];
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("2. dizinin %d. satırı gir, %d. sütunu gir: ", d, e);
            scanf ("%d", &f [d] [e]);
        }
    }
    int g [a] [c];
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            g [d] [e] = b [d] [e] + f [d] [e];
        }
    }
    for (d = 0; d < a; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%d ", g [d] [e]);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
