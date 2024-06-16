#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c;
    printf ("1. dizi kaç elemanlı? ");
    scanf ("%d", &a);
    int b [a];
    for (c = 0; c < a; ++ c) {
        printf ("b dizisinin %d. elemanı: \n", c);
        scanf ("%d", &b [c]);
    }
    int *d;
    d = (int *) calloc (a, sizeof (int));
    for (c = 0; c < a; ++ c) {
        * (d + c) = b [c];
    }
    free (d);
    return EXIT_SUCCESS;
}
