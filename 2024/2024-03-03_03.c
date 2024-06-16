/*
2 dizinin birleştirilip sıralanması.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, k;
    printf ("1. dizi kaç elemanı? ");
    scanf ("%d", &a);
    int b [a];
    printf ("2. dizi kaç elemanı? ");
    scanf ("%d", &k);
    int h [k];
    for (c = 0; c < a; ++ c) {
        printf ("1. dizinin %d. elemanını gir: ", c);
        scanf ("%d", &b [c]);
    }
    for (c = 0; c < k; ++ c) {
        printf ("2. dizinin %d. elemanını gir: ", c);
        scanf ("%d", &h [c]);
    }
    int g [k + a];
    for (c = 0; c < a; ++ c) {
        g [c] = b [c];
    }
    for (d = 0; d < k; ++ d, ++ c) {
        g [c] = h [d];
    }
    for (c = 0; c < a + k; ++ c) {
        printf ("%d ", g [c]);
    }
    printf ("\n");
    for (e = 0; e < ((a + k) - 1); ++ e) {
        for (c = e + 1; c < (a + k); ++ c) {
            if (g [c] > g [e]) {
                d = g [c];
                g [c] = g [e];
                g [e] = d;
            }
        }
    }
    printf ("Büyükten küçüğe doğru sıralanışı: ");
    for (c = 0; c < (a + k); ++ c) {
        printf ("%d ", g [c]);
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
