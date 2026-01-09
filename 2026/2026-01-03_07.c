/*
Bir çift indeks (i, j) (i < j) iyi çift kabul ediliyor eğer:
|A[i] − A[j]| = |i − j|
Dizideki iyi çiftlerin sayısını bul.
*/
#include <stdio.h>
#include <stdlib.h>

int x (int, int, int, int);
int main (int argc, char * * argv, char * * envp) {
    int a, *b, c, d, e, f, g, h = 0;
    scanf ("%d%*c", &a);
    b = (int *) calloc (a, sizeof (int));
    for (c = 0; c < a; ++ c) {
        scanf ("%d%*c", &*(b + c));
    }
    printf ("These are good numbers:\n");
    for (c = 0; c < (a - 1); ++ c) {
        for (d = c + 1; d < a; ++ d) {
            e = * (b + c);
            f = * (b + d);
            g = x (e, f, c, d);
            if (g == 1) {
                printf ("%d %d\n", * (b + c), * (b + d));
                h += 1;
            }
        }
    }
    printf ("This serie has %d good numbers.\n", h);
    free (b);
    return EXIT_SUCCESS;
}
int x (int a, int b, int d, int e) {
    int c, f;
    c = a - b;
    if (c < 0) {
        c = c * -1;
    }
    f = d - e;
    if (f < 0) {
        f = f * -1;
    }
    if (c == f) {
        return 1;
    }
    return 0;
}
