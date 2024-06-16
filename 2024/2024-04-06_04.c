//1 diziyi pointerle sıralama.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, d, e;
    e = 1;
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
    while (e == 1) {
        e = 0;
        for (d = 0; d < (a - 1); ++ d) {
            if (* (o + d + 1) < * (o + d)) {
                b = * (o + d + 1);
                * (o + d + 1) = * (o + d);
                * (o + d) = b;
                e = 1;
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
