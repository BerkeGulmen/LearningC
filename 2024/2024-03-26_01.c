#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e;
    printf ("Dizi kaç elemanlı? ");
    scanf ("%d", &a);
    int b [a];
    int * k;
    k = (int *) calloc (a, sizeof (int));
    for (c = 0; c < a; ++ c) {
        printf ("%d. elemanı gir: ", c);
        scanf ("%d", &b [c]);
        * (k + c) = b [c];
    }
    for (c = 0; c < (a - 1); ++ c) {
        for (d = c + 1; d < a; ++ d) {
            if (* (k + d) < * (k + c)) {
                e = * (k + d);
                * (k + d) = * (k + c);
                * (k + c) = e;
            }
        }
    }
    printf ("Küçükten büyüğe doğru: ");
    for (c = 0; c < a; ++ c) {
        printf ("%d ", * (k + c));
    }
    printf ("\n");
    free (k);
    return EXIT_SUCCESS;
}
