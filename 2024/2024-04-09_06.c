//Double pointer matrix determinant calculation
#include <stdio.h>
#include <stdlib.h>

int ** s (int, int);
void x (int **, int, int);
int ** w (int **, int, int, int, int);
void y (int **, int, int);
void q (int **, int);
int u (int **, int, int);
int main (int argc, char ** argv, char ** envp) {
    int a, b, ** c;
    printf ("Row: ");
    scanf ("%d", &a);
    printf ("Column: ");
    scanf ("%d", &b);
    c = s (a, b);
    x (c, a, b);
    y (c, a, b);
    printf ("%d\n", u (c, a, b));
    q (c, a);
    return EXIT_SUCCESS;
}
int ** s (int a, int b) {
    int ** c, d;
    c = (int **) calloc (a, sizeof (int *));
    for (d = 0; d < a; ++ d) {
        * (c + d) = (int *) calloc (b, sizeof (int));
    }
    return c;
}
void x (int ** a, int b, int c) {
    int d, e, f;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%dth row %dth column: ", d, e);
            scanf ("%d", &f);
            * (* (a + d) + e) = f;
        }
    }
}
int ** w (int ** a, int b, int c, int d, int e) {
    int f, ** g, h;
    g = s ((b - 1), (c - 1));
    for (f = 0; f < b; ++ f) {
        for (h = 0; h < c; ++ h) {
            if (f == d) {
                break;
            }
            if (h == e) {
                continue;
            }
            if (f < d && h < e) {
                * (* (g + f) + h) = * (* (a + f) + h);
            }
            if (f < d && h > e) {
                * (* (g + f) + h - 1) = * (* (a + f) + h);
            }
            if (f > d && h < e) {
                * (* (g + f - 1) + h) = * (* (a + f) + h);
            }
            if (f > d && h > e) {
                * (* (g + f - 1) + h - 1) = * (* (a + f) + h);
            }
        }
    }
    return g;
}
int u (int ** a, int b, int c) {
    int d = 0, e, f;
    if (b == 2 && c == 2) {
        d = (* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 0) + 1) * * (* (a + 1) + 0));
    }
    else {
        for (e = 0; e < b; ++ e) {
            if ((0 + e) % 2 != 0) {
                f = - 1;
            }
            else {
                f = 1;
            }
            d += f * * (* (a + 0) + e) * u (w (a, b, c, 0, e), (b - 1), (c - 1));
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
    printf ("\n");
}
void q (int ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (a + c));
    }
    free (a);
}
