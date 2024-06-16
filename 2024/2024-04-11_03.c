//Matrix Transpose Double Pointer.
#include <stdio.h>
#include <stdlib.h>

int ** x (int, int);
void z (int **, int, int);
int ** w (int **, int, int);
void y (int **, int, int);
void q (int **, int);
int main (int argc, char ** argv, char ** envp) {
    int a, b, ** c;
    printf ("Row: ");
    scanf ("%d", &a);
    printf ("Column: ");
    scanf ("%d", &b);
    c = x (a, b);
    z (c, a, b);
    y (c, a, b);
    y (w (c, a, b), b, a);
    q (c, a);
    return EXIT_SUCCESS;
}
int ** x (int a, int b) {
    int c, ** d;
    d = (int **) calloc (a, sizeof (int *));
    for (c = 0; c < a; ++ c) {
        * (d + c) = (int *) calloc (b, sizeof (int));
    }
    return d;
}
void z (int ** a, int b, int c) {
    int d, e, f;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%dth row %dth column: ", d, e);
            scanf ("%d", &f);
            * (* (a + d) + e) = f;
        }
    }
}
int ** w (int ** a, int b, int c) {
    int d, e, ** f;
    f = x (c, b);
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            * (* (f + e) + d) = * (* (a + d) + e);
        }
    }
    return f;
}
void y (int ** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%d ", * (* (a + d) + e));
        }
        printf ("\n");
    }
}
void q (int ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (a + c));
    }
    free (a);
}
