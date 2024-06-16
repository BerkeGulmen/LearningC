/*
1 boyutlu dizi: 2 tane diziyi birleştirip sıralama.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f;
    printf ("1. dizi kaç elemanlı? ");
    scanf ("%d", &a);
    int b [a];
    printf ("2. dizi kaç elemanlı? ");
    scanf ("%d", &f);
    int h [f];
    for (c = 0; c < a; ++ c) {
        printf ("1. dizinin %d. elemanını gir: ", c);
        scanf ("%d", &b [c]);
    }
    for (c = 0; c < f; ++ c) {
        printf ("2. dizinin %d. elemanını gir: ", c);
        scanf ("%d", &h [c]);
    }
    int k [a + f];
    for (c = 0; c < a; ++ c) {
        k [c] = b [c];
    }
    for (d = 0; d < f; ++ d, ++ c) {
        k [c] = h [d];
    }
    for (c = 0; c < a + f; ++ c) {
        printf ("%d ", h [c]);
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
