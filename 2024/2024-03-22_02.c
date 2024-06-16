//pointer ile dizi sıralama.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, e, f;
    c = 1;
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
    c = 1;
    while (c == 1) {
        c = 0;
        for (e = 0; e < (a - 1); ++ e) {
            if (* (d + e) > * (d + (e + 1))) {
                f = * (d + (e + 1));
                * (d + (e + 1)) = * (d + e);
                * (d + e) = f;
                c = 1;
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
