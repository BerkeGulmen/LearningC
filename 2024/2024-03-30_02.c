//1 boyutlu diziyi pointer ile sıralama.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, d, e;
    b = 1;
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
    b = 1;
    while (b == 1) {
        b = 0;
        for (d = 0; d < (a - 1); ++ d) {
            if (* (k + d + 1) < * (k + d)) {
                e = * (k + d + 1);
                * (k + d + 1) = * (k + d);
                * (k + d) = e;
                b = 1;
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
