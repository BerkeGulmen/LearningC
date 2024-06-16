//Double pointer, matrix multiplication
#include <stdio.h>
#include <stdlib.h>

int ** k (int, int);
void s (int **, int, int);
void n (int **, int **, int **, int, int, int);
void o (int **, int, int);
void m (int **, int);
int main (int argc, char ** argv, char ** envp) {
    int ** x, ** y, ** z, a, b, c;
    printf ("Row number of 1st matrix: ");
    scanf ("%d", &a);
    printf ("Column number of 1st matrix AND row number of 2nd matrix: ");
    scanf ("%d", &c);
    printf ("Column number of 2nd matrix: ");
    scanf ("%d", &b);
    x = k (a, c);
    y = k (c, b);
    z = k (a, b);
    s (x, a, c);
    s (y, c, b);
    n (x, y, z, a, c, b);
    o (z, a, b);
    m (x, a);
    m (y, c);
    m (z, a);
    return EXIT_SUCCESS;
}
int ** k (int x, int y) {
    int a, ** b;
    b = (int **) calloc (x, sizeof (int *));
    for (a = 0; a < x; ++ a) {
        * (b + a) = (int *) calloc (y, sizeof (int));
    }
    return b;
}
void s (int ** k, int a, int b) {
    int c, d, e;
    for (c = 0; c < a; ++ c) {
        for (d = 0; d < b; ++ d) {
            printf ("%d. satır %d. sütunu gir: ", c, d);
            scanf ("%d", &e);
            * (* (k + c) + d) = e;
        }
    }
}
void n (int ** x, int ** y, int ** z, int a, int b, int c) {
    int s, e, g, j;
    for (s = 0; s < a; ++ s) {
        for (e = 0; e < c; ++ e) {
            for (g = 0, j = 0; j < b; ++ j) {
                g += * (* (x + s) + j) * * (* (y + j) + e);
            }
            * (* (z + s) + e) = g;
        }
    }
}
void o (int ** z, int a, int b) {
    int d, c;
    for (c = 0; c < a; ++ c) {
        for (d = 0; d < b; ++ d) {
            printf ("%d ", * (* (z + c) + d));
        }
        printf ("\n");
    }
}
void m (int ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (a + c));
    }
    free (a);
}
