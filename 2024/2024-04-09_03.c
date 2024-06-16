//Double pointer matrix multiplication with function
#include <stdio.h>
#include <stdlib.h>

int ** s (int, int);
void j (int **, int, int);
void x (int **, int **, int **, int, int, int);
void y (int **, int, int);
void z (int **, int);
int main (int argc, char ** argv, char ** envp) {
    int a, b, c, ** d, ** e, ** g;
    printf ("Row number of 1st matrix: ");
    scanf ("%d", &a);
    printf ("Column number of 1st matrix AND row number of 2nd matrix: ");
    scanf ("%d", &c);
    printf ("Column number of 2nd matrix: ");
    scanf ("%d", &b);
    d = s (a, c);
    e = s (c, b);
    g = s (a, b);
    j (d, a, c);
    j (e, c, b);
    x (d, e, g, a, b, c);
    y (g, a, b);
    z (d, a);
    z (e, c);
    z (g, a);
    return EXIT_SUCCESS;
}
int ** s (int t, int g) {
    int ** a, b;
    a = (int **) calloc (t, sizeof (int *));
    for (b = 0; b < t; ++ b) {
        * (a + b) = (int *) calloc (g, sizeof (int));
    }
    return a;
}
void j (int ** l, int k, int n) {
    int a, b, c;
    for (a = 0; a < k; ++ a) {
        for (b = 0; b < n; ++ b) {
            printf ("%dth row and %dth column: ", a, b);
            scanf ("%d", &c);
            * (* (l + a) + b) = c;
        }
    }
}
void x (int ** r, int ** n, int ** p, int z, int y, int o) {
    int a, b, c, d;
    for (a = 0; a < z; ++ a) {
        for (b = 0; b < y; ++ b) {
            for (c = 0, d = 0; c < o; ++ c) {
                d += * (* (r + a) + c) * * (* (n + c) + b);
            }
            * (* (p + a) + b) = d;
        }
    }
}
void y (int ** k, int n, int r) {
    int a, b;
    for (a = 0; a < n; ++ a) {
        for (b = 0; b < r; ++ b) {
            printf ("%d ", * (* (k + a) + b));
        }
        printf ("\n");
    }
}

void z (int ** r, int n) {
    int a;
    for (a = 0; a < n; ++ a) {
        free (* (r + a));
    }
    free (r);
}
