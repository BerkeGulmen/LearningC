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
    b = 1;
    while (b == 1) {
        b = 0;
        for (c = 0; c < (a - 1); ++ c) {
            if (* (s + c + 1) < * (s + c)) {
                d = * (s + c + 1);
                * (s + c + 1) = * (s + c);
                * (s + c) = d;
                b = 1;
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
