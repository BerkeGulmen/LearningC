//1 boyutlu pointer dizisi sıralama.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, e, f;
    printf ("Kaç elemanlı? ");
    scanf ("%d", &a);
    int b [a];
    for (c = 0; c < a; ++ c) {
        printf ("%d. elemanı gir: ", c);
        scanf ("%d", &b [c]);
    }
    int * d;
    d = (int *) calloc (a, sizeof (int));
    for (c = 0; c < a; ++ c) {
        * (d + c) = b [c];
    }
    for (e = 0; e < (a - 1); ++ e) {
        for (c = e + 1; c < a; ++ c) {
            if (* (d + c) < * (d + e)) {
                f = * (d + c);
                * (d + c) = * (d + e);
                * (d + e) = f;
            }
        }
    }
    printf ("Küçükten büyüğe doğru sıralanışı: ");
    for (c = 0; c < a; ++ c) {
        printf ("%d ", * (d + c));
    }
    printf ("\n");
    free (d);
    return EXIT_SUCCESS;
}
