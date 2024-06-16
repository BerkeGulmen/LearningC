/*
Tek boyutlu dizide sırlamalar.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f;
    printf ("Kaç sayı gireceksin? ");
    scanf ("%d", &a);
    int b [a];
    for (c = 0; c < a; ++ c) {
        printf ("%d. elemanı gir: ", c);
        scanf ("%d", &b [c]);
    }
    for (c = 0; c < a - 1; ++ c) {
        for (e = c + 1; e < a; ++ e) {
            if (b [c] > b [e]) {
                f = b [c];
                b [c] = b [e];
                b [e] = f;
            }
        }
    }
    printf ("Küçükten büyüğe doğru sıralanışı: ");
    for (c = 0; c < a; ++ c) {
        printf ("%d ", b [c]);
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
