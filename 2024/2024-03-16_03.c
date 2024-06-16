#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e, f, g;
    printf ("1. ve 2. matrixin satırını gir: ");
    scanf ("%d", &a);
    printf ("1. ve 2. matrixin sütununu gir: ");
    scanf ("%d", &c);
    int b [a] [c];
    int h [a] [c];
    for (f = 0; f < a; ++ f) {
        for (g = 0; g < c; ++ g) {
            printf ("1. matrixin %d. satırını %d. sütununu gir: ", f, g);
            scanf ("%d", &b [f] [g]);
        }
    }
    for (f = 0; f < a; ++ f) {
        for (g = 0; g < c; ++ g) {
            printf ("2. matrixin %d. satırını %d. sütununu gir: ", f, g);
            scanf ("%d", &h [f] [g]);
        }
    }
    int x [a] [c];
    for (f = 0; f < a; ++ f) {
        for (g = 0; g < c; ++ g) {
            x [f] [g] = b [f] [g] + h [f] [g];
        }
    }
    for (f = 0; f < a; ++ f) {
        for (g = 0; g < c; ++ g) {
            printf ("%d ", x [f] [g]);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
