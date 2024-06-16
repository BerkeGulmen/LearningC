#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f;
    printf ("Kaç sayı gireceksin? ");
    scanf ("%d", &a);
    int b [a];
    for (d = 0; d < a; ++ d) {
        printf ("%d. elemanı gir: ", d);
        scanf ("%d", &b [d]);
    }
    for (c = 0, f = 0; c < a - 1; ++ c) {
        for (e = c + 1; e < a; ++ e) {
            if (b [e] > b [c]) {
                f = b [c];
                b [c] = b [e];
                b [e] = f;
            }
        }
    }
    for (c = 0; c < a; ++ c) {
        printf ("%d ", b [c]);
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
