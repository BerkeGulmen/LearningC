//Double pointer matrix determinant calculation
#include <stdio.h>
#include <stdlib.h>

int ** x (int, int);
void z (int **, int, int);
int ** w (int **, int, int, int, int);
void y (int **, int, int);
int u (int **, int, int);
void q (int **, int);
int main (int argc, char ** argv, char ** envp) {
    int a, b, ** c;
    printf ("Matrix row: ");
    scanf ("%d", &a);
    printf ("Matrix column: ");
    scanf ("%d", &b);
    c = x (a, b);
    z (c, a, b);
    y (c, a, b);
    printf ("Determinant: %d\n", u (c, a, b));
    q (c, a);
    return EXIT_SUCCESS;
}
int ** x (int c, int d) {
    int ** a, b;
    a = (int **) calloc (c, sizeof (int *));
    for (b = 0; b < c ; ++ b) {
        * (a + b) = (int *) calloc (d, sizeof (int));
    }
    return a;
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
int ** w (int ** a, int b, int c, int d, int e) {
    int ** f, g, h;
    f = x ((b - 1), (c - 1));
    for (g = 0; g < b; ++ g) {
        for (h = 0; h < c; ++ h) {
            if (g == d) {
                break;
            }
            if (h == e) {
                continue;
            }
            if (g < d && h < e) {
                * (* (f + g) + h) = * (* (a + g) + h);
            }
            if (g < d && h > e) {
                * (* (f + g) + h - 1) = * (* (a + g) + h);
            }
            if (g > d && h < e) {
                * (* (f + g - 1) + h) = * (* (a + g) + h);
            }
            if (g > d && h > e) {
                * (* (f + g - 1) + h - 1) = * (* (a + g) + h);
            }
        }
    }
    return f;
}
int u (int ** a, int b, int c) {
    int d = 0, e, f;
    if ((b == 2) && (c == 2)) {
        d = (* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 0) + 1) * * (* (a + 1) + 0));
    }
    else {
        for (e = 0; e < b; ++ e) {
            if (((0 + e) % 2) != 0) {
                f = -1;
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
