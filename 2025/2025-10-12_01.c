//Determinant calculator.
#include <stdio.h>
#include <stdlib.h>

void x (double ***, int, int);
void y (double ***, int, int);
void z (double **, int, int);
void o (double ***, int);
int main (int argc, char * * argv, char * * envp) {
    int a, b;
    printf ("Row number.\n");
    scanf ("%d%*c", &a);
    printf ("Column number.\n");
    scanf ("%d%*c", &b);
    double **c;
    x (&c, a, b);
    y (&c, a, b);
    z (c, a, b);
    o (&c, a);
    return EXIT_SUCCESS;
}
void o (double *** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (*a + c));
    }
    free (*a);
}
void z (double ** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%lf ", *(* (a + d) + e));
        }
        printf ("\n");
    }
}
void x (double *** a, int b, int c) {
    int d;
    * a = (double **) calloc (b, sizeof (double *));
    for (d = 0; d < c; ++ d) {
        * (*a + d) = (double *) calloc (c, sizeof (double));
    }
}
void y (double *** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            scanf ("%lf%*c", (*(*a + d) + e));
        }
    }
}
