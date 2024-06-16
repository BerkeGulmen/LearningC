#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, m, z;
    printf ("1. dizi kaç elemanlı? ");
    scanf ("%d", &a);
    printf ("2. dizi kaç elemanlı? ");
    scanf ("%d", &c);
    int b [a];
    int k [c];
    int *s;
    s = (int *) calloc (a + c, sizeof (int));
    for (m = 0; m < a; ++ m) {
        printf ("b dizisinin %d. elemanı: \n", m);
        scanf ("%d", &b [m]);
    }
    for (m = 0; m < c; ++ m) {
        printf ("k dizisinin %d. elemanı: \n", m);
        scanf ("%d", &k [m]);
    }
    for (m = 0; m < a; ++ m) {
        * (s + m) = b [m];
    }
    for (m = a, c += a, z = 0; m < c; ++ m, ++ z) {
        * (s + m) = k [z];
    }
    for (m = 0; m < c; ++ m) {
        printf ("%d ", * (s + m));
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
