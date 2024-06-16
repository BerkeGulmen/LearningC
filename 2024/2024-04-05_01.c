//1 boyutlu pointerde sıralama.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d;
    printf ("Kaç elemanlı? ");
    scanf ("%d", &a);
    int * s;
    int g [a];
    s = (int *) calloc (a, sizeof (int));
    for (b = 0; b < a; ++ b) {
        printf ("%d. elemanı gir: ", b);
        scanf ("%d", &g [b]);
        * (s + b) = g [b];
    }
    for (b = 0; b < (a - 1); ++ b) {
        for (c = b + 1; c < a; ++ c) {
            if (* (s + c) < * (s + b)) {
                d = * (s + c);
                * (s + c) = * (s + b);
                * (s + b) = d;
            }
        }
    }
    printf ("Küçükten büyüğe doğru sıralanışı: ");
    for (b = 0; b < a; ++ b) {
        printf ("%d ", * (s + b));
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
