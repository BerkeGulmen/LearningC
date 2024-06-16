//1 boyutlu dizide pointerle sıralama.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, d, e;
    b = 1;
    printf ("Kaç elemanlı? ");
    scanf ("%d", &a);
    int c [a];
    int * o;
    o = (int *) calloc (a, sizeof (int));
    for (b = 0; b < a; ++ b) {
        printf ("%d. elemanı gir: ", b);
        scanf ("%d", &c [b]);
        * (o + b) = c [b];
    }
    b = 1;
    while (b == 1) {
        b = 0;
        for (d = 0; d < (a - 1); ++ d) {
            if (* (o + d + 1) < * (o + d)) {
                e = * (o + d + 1);
                * (o + d + 1) = * (o + d);
                * (o + d) = e;
                b = 1;
            }
        }
    }
    printf ("Küçükten büyüğe doğru sıralanışı: ");
    for (b = 0; b < a; ++ b) {
        printf ("%d ", * (o + b));
    }
    free (o);
    return EXIT_SUCCESS;
}
