#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e;
    printf ("Kaç elemanlı? ");
    scanf ("%d", &a);
    int b [a];
    int * s;
    s = (int *) calloc (a, sizeof (int));
    for (c = 0; c < a; ++ c) {
        printf ("%d. elemanı gir: ", c);
        scanf ("%d", &b [c]);
        * (s + c) = b [c];
    }
    for (d = 0; d < (a - 1); ++ d) {
        for (c = d + 1; c < a; ++ c) {
            if (* (s + c) < * (s + d)) {
                e = * (s + c);
                * (s + c) = * (s + d);
                * (s + d) = e;
            }
        }
    }
    printf ("Küçükten büyüğe doğru sıralanışı: ");
    for (c = 0; c < a; ++ c) {
        printf ("%d ", * (s + c));
    }
    printf ("\n");
    free (s);
    return EXIT_SUCCESS;
}
