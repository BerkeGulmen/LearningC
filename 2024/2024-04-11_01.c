//Double pointer matrix determinant calculation.
#include <stdio.h>
#include <stdlib.h>

int ** x (int, int);
void y (int **, int, int);
int ** w (int **, int, int, int, int);
void z (int **, int, int);
int u (int **, int, int);
void q (int **, int);
int main (int argc, char ** argv, char ** envp) {
    int a, b, ** c;
    printf ("Row: ");
    scanf ("%d", &a);
    printf ("Column: ");
    scanf ("%d", &b);
    c = x (a, b);
    y (c, a, b);
    z (c, a, b);
    printf ("%d\n", u (c, a, b));
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
void y (int ** a, int b, int c) {
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
    int f, g, ** h;
    h = x ((b - 1), (c - 1));
    for (f = 0; f < b; ++ f) {
        for (g = 0; g < c; ++ g) {
            if (f == d) {
                break;
            }
            else if (g == e) {
                continue;
            }
            else if (f < d && g < e) {
                * (* (h + f) + g) = * (* (a + f) + g);
            }
            else if (f < d && g > e) {
                * (* (h + f) + g - 1) = * (* (a + f) + g);
            }
            else if (f > d && g < e) {
                * (* (h + f - 1) + g) = * (* (a + f) + g);
            }
            else if (f > d && g > e) {
                * (* (h + f - 1) + g - 1) = * (* (a + f) + g);
            }
        }
    }
    return h;
}
int u (int ** a, int b, int c) {
    int d = 0, e, f;
    if (b == 2 && c == 2) {
        d = (* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 0) + 1) * * (* (a + 1) + 0));
    }
    else {
        for (e = 0; e < b; ++ e) {
            if ((e + 0) % 2 == 0) {
                f = 1;
            }
            else {
                f = - 1;
            }
            d += f * * (* (a + 0) + e) * u (w (a, b, c, 0, e), (b - 1), (c - 1));
        }
    }
    return d;
}
void z (int ** a, int b, int c) {
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
