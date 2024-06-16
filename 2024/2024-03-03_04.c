/*
1 boyutlu dizi yi tersten sıralama.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c;
    printf ("Kaç elemanlı? ");
    scanf ("%d", &a);
    int b [a];
    for (c = 0; c < a; ++ c) {
        printf ("%d. elemanı gir: ", c);
        scanf ("%d", &b [c]);
    }
    int g [a];
    for (c = 0; c < a; ++ c) {
        g [c] = b [a - 1 - c];
    }
    for (c = 0; c < a; ++ c) {
        printf ("%d ", g [c]);
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
