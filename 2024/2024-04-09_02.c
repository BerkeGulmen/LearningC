//Order-2 on single pointer array
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
    int a = 1, b, c;
    while (a == 1) {
        a = 0;
        for (b = 0; b < (z - 1); ++ b) {
            if (* (y + b + 1) < * (y + b)) {
                c = * (y + b + 1);
                * (y + b + 1) = * (y + b);
                * (y + b) = c;
                a = 1;
            }
        }
    }
}
void z (int * u, int h) {
    int a;
    printf ("Order - 2");
    printf ("\n");
    for (a = 0; a < h; ++ a) {
        printf ("%d ", * (u + a));
    }
    printf ("\n");
}
