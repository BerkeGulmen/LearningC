//Determinant calculator.
#include <stdio.h>
#include <stdlib.h>

void x (double ***, int, int);
void y (double ***, int, int);
void z (double **, int, int);
void q (double ***, int);
double ** w (double **, int, int, int, int);
double u (double **, int, int);
int main (int argc, char * * argv, char * * envp) {
    int a, b;
    printf ("Enter row number: ");
    scanf ("%d%*c", &a);
    printf ("Enter column number: ");
    scanf ("%d%*c", &b);
    double ** c;
    x (&c, a, b);
    y (&c, a, b);
    z (c, a, b);
    printf ("%lf\n", u (c, a, b));
    q (&c, a);
    return EXIT_SUCCESS;
}
double u (double ** a, int b, int c) {
    if (b == 2 && c == 2) {
        return ((* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 1) + 0) * * (* (a + 0) + 1)));
    }
    int d;
    double e, f;
    for (d = 0, e = 0.0, f = 0.0; d < b; ++ d) {
        if ((d % 2) == 0) {
            e = 1.0;
        }
        else {
            e = -1.0;
        }
        f += e * * (* (a + d) + 0) * u (w (a, b, c, d, 0), (b - 1), (c - 1));
    }
    return f;
}
double ** w (double ** a, int b, int c, int d, int e) {
    double ** f;
    x (&f, (b - 1), (c - 1));
    int g, h;
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
            if (g > d && h < e) {
                * (* (f + g - 1) + h) = * (* (a + g) + h);
            }
            if (g < d && h > e) {
                * (* (f + g) + h - 1) = * (* (a + g) + h);
            }
            if (g > d && h > e) {
                * (* (f + g - 1) + h - 1) = * (* (a + g) + h);
            }
        }
    }
    return f;
}
void q (double *** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (*(*a +c));
    }
    free (*a);
}
void z (double ** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%lf ", * (* (a + d) + e));
        }
        printf ("\n");
    }
}
void y (double *** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            scanf ("%lf%*c", &*(* (*a + d) + e));
        }
    }
}
void x (double *** a, int b, int c) {
    int d;
    *a = (double **) calloc (b, sizeof (double *));
    for (d = 0; d < b; ++ d) {
        * (*a + d) = (double *) calloc (c, sizeof (double));
    }
}
