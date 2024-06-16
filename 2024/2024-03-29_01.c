//1 diziyi pointerle sıralama.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, d, e;
    printf ("Dizi kaç elemanlı? ");
    scanf ("%d", &a);
    int c [a];
    int * o;
    o = (int *) calloc (a, sizeof (int));
    for (b = 0; b < a; ++ b) {
        printf ("%d. elemanı gir: ", b);
        scanf ("%d", &c [b]);
        * (o + b) = c [b];
    }
    for (b = 0; b < (a - 1); ++ b) {
        for (d = b + 1; d < a; ++ d) {
            if (* (o + d) < * (o + b)) {
                e = * (o + d);
                * (o + d) = * (o + b);
                * (o + b) = e;
            }
        }
    }
    printf ("Küçükten büyüğe doğru sıralanışı: ");
    for (b = 0; b < a; ++ b) {
        printf ("%d ", * (o + b));
    }
    printf ("\n");
    free (o);
    return EXIT_SUCCESS;
}
