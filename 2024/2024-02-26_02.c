/*
Tek boyutlu dizide büyükten küçüğe doğru sıralama.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f;
    printf ("Kaç elemanlı dizi olacak? ");
    scanf ("%d", &a);
    int b [a];
    for (c = 0; c < a; ++ c) {
        printf ("Elemanı gir: ");
        scanf ("%d", &b [c]);
    }
    for (e = 0; e < a - 1; ++ e) {
        for (c = e + 1; c < a; ++ c) {
            if (b [c] > b [e]) {
                f = b [c];
                b [c] = b [e];
                b [e] = f;
            }
        }
    }
    printf ("Büyükten küçüğe doğru sıralanışı: ");
    for (c = 0; c < a; ++ c) {
        printf ("%d ", b [c]);
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
