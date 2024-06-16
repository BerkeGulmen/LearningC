//1 boyutlu diziyi pointer ile sıralama.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, d, e;
    printf ("Kaç elemanlı? ");
    scanf ("%d", &a);
    int c [a];
    int * k;
    k = (int *) calloc (a, sizeof (int));
    for (b = 0; b < a; ++ b) {
        printf ("%d. elemanı gir: ", b);
        scanf ("%d", &c [b]);
        * (k + b) = c [b];
    }
    for (b = 0; b < (a - 1); ++ b) {
        for (d = b + 1; d < a; ++ d) {
            if (* (k + d) < * (k + b)) {
                e = * (k + d);
                * (k + d) = * (k + b);
                * (k + b) = e;
            }
        }
    }
    printf ("Küçükten büyüğe doğru sıralanışı: ");
    for (b = 0; b < a; ++ b) {
        printf ("%d ", * (k + b));
    }
    printf ("\n");
    free (k);
    return EXIT_SUCCESS;
}
