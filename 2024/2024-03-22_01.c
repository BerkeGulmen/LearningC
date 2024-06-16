//pointer ile dizi sıralama.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, e, f;
    printf ("Kaç eleman? ");
    scanf ("%d", &a);
    int b [a];
    for (c = 0; c < a; ++ c) {
        printf ("%d. elemanı gir: ", c);
        scanf ("%d", &b [c]);
    }
    int *d;
    d = (int *) calloc (a, sizeof (int));
    for (c = 0; c < a; ++ c) {
        * (d + c) = b [c];
    }
    for (c = 0; c < (a - 1); ++ c) {
        for (e = c + 1; e < a; ++ e) {
            if (* (d + e) < * (d + c)) {
                f = * (d + e);
                * (d + e) = * (d + c);
                * (d + c) = f;
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
