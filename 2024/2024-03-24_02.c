#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d = 1, e;
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
    while (d == 1) {
        d = 0;
        for (c = 0; c < (a - 1); ++ c) {
            if (* (s + c + 1) < * (s + c)) {
                e = * (s + c + 1);
                * (s + c + 1) = * (s + c);
                * (s + c) = e;
                d = 1;
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

