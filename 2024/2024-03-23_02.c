//1 boyutlu pointer dizisi sıralama.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, e, f;
    e = 1;
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
    while (e == 1) {
        e = 0;
        for (c = 0; c < (a - 1); ++ c) {
            if (* (d + c + 1) < * (d + c)) {
                f = * (d + c + 1);
                * (d + c + 1) = * (d + c);
                * (d + c) = f;
                e = 1;
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
