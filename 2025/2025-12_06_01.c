//Determinant calculator.
#include <stdio.h>
#include <stdlib.h>

void x (double ***, int, int);
void y (double **, int, int);
void z (double **, int, int);
void q (double **, int);
double ** w (double **, int, int, int, int);
double u (double **, int, int);
int main (int argc, char * * argv, char * * envp) {
    double ** a;
    int b, c;
    printf ("Enter row and column.\n");
    scanf ("%d %d%*c", &b, &c);
    x (&a, b, c);
    y (a, b, c);
    z (a, b, c);
    printf ("%lf\n", u (a, b, c));
    q (a, b);
    return EXIT_SUCCESS;
}
double u (double ** a, int b, int c) {
    if (b == 2 && c == 2) {
        return ((* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 0) + 1) * * (* (a + 1) + 0)));
    }
    int d;
    double e, f;
    for (d = 0, f = 0.0; d < b; ++ d) {
        if ((d % 2) == 0) {
            e = 1.0;
        }
        else {
            e = - 1.0;
        }
        f += e * * (* (a + d) + 0) * u (w (a, b, c, d, 0), (b - 1), (c - 1));
    }
    return f;
}
double ** w (double ** a, int b, int c, int d, int e) {
    int f, g;
    double ** h;
    x (&h, (b - 1), (c - 1));
    for (f = 0; f < b; ++ f) {
        for (g = 0; g < c; ++ g) {
            if (f == d) {
                break;
            }
            if (g == e) {
                continue;
            }
            if (f < d && g < e) {
                * (* (h + f) + g) = * (* (a + f) + g);
            }
            if (f < d && g > e) {
                * (* (h + f) + g - 1) = * (* (a + f) + g);
            }
            if (f > d && g < e) {
                * (* (h + f - 1) + g) = * (* (a + f) + g);
            }
            if (f > d && g > e) {
                * (* (h + f - 1) + g - 1) = * (* (a + f) + g);
            }
        }
    }
    return h;
}
void q (double ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (a + c));
    }
    free (a);
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
void y (double ** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            scanf ("%lf%*c", (* (a + d) + e));
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
