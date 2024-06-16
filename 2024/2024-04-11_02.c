//C0-Factor of matrix double pointer
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
    y (w (c, a, b), a, b);
    q (c, a);
    return EXIT_SUCCESS;
}
int ** x (int a, int b) {
    int ** c, d;
    c = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (c + d) = (int *) calloc (b, sizeof (int));
    }
    return c;
}
void z (int ** a, int b, int c) {
    int d, e, f;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%dth row %dth column: ", d, e);
            scanf ("%d", &f);
            * (* (a + d) + e) = f;
        }
        printf ("\n");
    }
}
int ** w (int ** a, int b, int c) {
    int ** d, e, f;
    d = x (b, c);
    for (e = 0; e < b; ++ e) {
        for (f = 0; f < c; ++ f) {
            if ((e + f) % 2 == 0) {
                * (* (d + e) + f) = * (* (a + e) + f) * 1;
            }
            else {
                * (* (d + e) + f) = * (* (a + e) + f) * - 1;
            }
        }
    }
    return d;
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
