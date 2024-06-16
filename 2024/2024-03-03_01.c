/*
1 boyutlu dizide sıralama küçükten büyüğe.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a , c, d, e;
    printf ("Kaç elemanlı? ");
    scanf ("%d", &a);
    int b [a];
    for (c = 0; c < a; ++ c) {
        printf ("%d. elemanı gir: ", c);
        scanf ("%d", &b [c]);
    }
    for (e = 0; e < a - 1; ++ e) {
        for (c = e + 1; c < a; ++ c) {
            if (b [c] < b [e]) {
                d = b [c];
                b [c] = b [e];
                b [e] = d;
            }
        }
    }
    printf ("Küçükten büyüğe doğru sıralam: ");
    for (c = 0; c < a; ++ c) {
        printf ("%d ", b [c]);
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
