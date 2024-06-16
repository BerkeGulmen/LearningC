//Order-1 on single pointer array
#include <stdio.h>
#include <stdlib.h>

int * c (int);
void s (int *, int);
void x (int *, int);
void z (int *, int);
int main (int argc, char ** argv, char ** envp) {
    int a, * b;
    printf ("How many items? ");
    scanf ("%d", &a);
    b = c (a);
    s (b, a);
    x (b, a);
    z (b, a);
    free (b);
    return EXIT_SUCCESS;
}
int * c (int j) {
    int * s;
    s = (int *) calloc (j, sizeof (int));
    return s;
}
void s (int * k, int t) {
    int a, b;
    for (a = 0; a < t; ++ a) {
        printf ("%dth item: ", a);
        scanf ("%d", &b);
        * (k + a) = b;
    }
}
void x (int * y, int z) {
    int a, b, c;
    for (a = 0; a < (z - 1); ++ a) {
        for (b = a + 1; b < z; ++ b) {
            if (* (y + b) < * (y + a)) {
                c = * (y + b);
                * (y + b) = * (y + a);
                * (y + a) = c;
            }
        }
    }
}
void z (int * u, int h) {
    int a;
    printf ("Order - 1");
    for (a = 0; a < h; ++ a) {
        printf (" %d", * (u + a));
    }
    printf ("\n");
}
