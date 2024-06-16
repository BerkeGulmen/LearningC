/*
2 boyutlu dizi.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e;
    printf ("Satırı kaç elemanlı? ");
    scanf ("%d", &a);
    printf ("Sütunu kaç elemanlı? ");
    scanf ("%d", &e);
    int b [a] [e];
    for (c = 0; c < a; ++ c) {
        for (d = 0; d < e; ++ d) {
            printf ("%d. satır %d. sütunun değerini gir: ", c, d);
            scanf ("%d", &b [c] [d]);
        }
    }
    for (c = 0; c < a; ++ c) {
        for (d = 0; d < e; ++ d) {
            printf ("%d ", b [c] [d]);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
