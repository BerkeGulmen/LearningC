//Single pointer arrays sum and finaly order&print it.
#include <stdio.h>
#include <stdlib.h>

int * c (int);
void f (int *, int);
void z (int *, int);
void x (int *, int *, int *, int);
void y (int *, int);
int main (int argc, char ** argv, char ** envp) {
    int a, * b, * d, * e;
    printf ("How many items? ");
    scanf ("%d", &a);
    b = c (a);
    d = c (a);
    e = c (a);
    f (b, a);
    f (d, a);
    x (b, d, e, a);
    z (e, a);
    y (e, a);
    free (b);
    free (d);
    free (e);
    return EXIT_SUCCESS;
}
int * c (int a) {
    int * d;
    d = (int *) calloc (a, sizeof (int));
    return d;
}
void f (int * s, int x) {
    int a, b;
    for (a = 0; a < x; ++ a) {
        printf ("%dth item: ", a);
        scanf ("%d", &b);
        * (s + a) = b;
    }
}
void x (int *u, int *c, int *s, int k) {
    int a;
    for (a = 0; a < k; ++ a) {
        * (s + a) = * (u + a) + * (c + a);
    }
}
void z (int * k, int y) {
    int a, b, c = 1;
    while (c == 1) {
        c = 0;
        for (b = 0; b < (y - 1); ++ b) {
            if (* (k + b + 1) < * (k + b)) {
                a = * (k + b + 1);
                * (k + b + 1) = * (k + b);
                * (k + b) = a;
                c = 1;
            }
        }
    }
}
void y (int * r, int t) {
    int a;
    printf ("Küçükten büyüğe doğru sıralanışı: ");
    for (a = 0; a < t; ++ a) {
        printf ("%d ", * (r + a));
    }
    printf ("\n");
}
