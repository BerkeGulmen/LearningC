#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, f, e, k;
    printf ("1. diziyi gir: ");
    scanf ("%d", &a);
    int b [a];
    for (e = 0; e < a; ++ e) {
        printf ("1. dizinin %d. elemanını gir: ", e);
        scanf ("%d", &b [e]);
    }
    printf ("2. diziyi gir: ");
    scanf ("%d", &f);
    int c [f];
    for (e = 0; e < f; ++ e) {
        printf ("2. dizinin %d. elemanını gir: ", e);
        scanf ("%d", &c [e]);
    }
    k = a + f;
    int h [k];
    for (e = 0; e < a; ++ e) {
        h [e] = b [e];
    }
    for (e = a; e < k; ++ e) {
        h [e] = c [e - a];
    }
    for (e = 0; e < k; ++ e) {
        printf ("%d ", h [e]);
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
