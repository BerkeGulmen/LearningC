/*
Determinant calculation.
*/
#include <stdio.h>
#include <stdlib.h>
double ** z (int, int);
double ** y (double **, int, int);
void v (double **, int, int);
double ** w (double **, int, int, int, int);
double u (double **, int, int);
void o (double **, int);
int main (int argc, char * * argv, char * * envp) {
    int b, c;
    double ** a;
    scanf ("%d %d%*c", &b, &c);
    a = z (b, c);
    a = y (a, b, c);
    v (a, b, c);
    printf ("%lf\n", u (a, b, c));
    o (a, b);
    return EXIT_SUCCESS;
}
double u (double ** a, int b, int c) {
    if (b == 2 && c == 2) {
        return ((* (* (a + 1) + 1) * * (* (a + 0) + 0)) - (* (* (a + 1) + 0) * * (* (a + 0) + 1)));
    }
    int d;
    double e, f;
    for (d = 0, e = 1.0, f = 0.0; d < c; ++ d) {
        f += e * * (* (a + 0) + d) * u (w (a, b, c, 0, d), b - 1, c - 1);
        e *= - 1.0;
    }
    return f;
}
double ** w (double ** a, int b, int c, int d, int e) {
    double ** h;
    h = z (b - 1, c - 1);
    int f, g;
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
void v (double ** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%lf ", * (* (a + d) + e));
        }
        printf ("\n");
    }
}
double ** z (int b, int c) {
    int d;
    double ** a;
    a = (double **) calloc (b, sizeof (double *));
    for (d = 0; d < b; ++ d) {
        * (a + d) = (double *) calloc (c, sizeof (double));
    }
    return a;
}
double ** y (double ** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            scanf ("%lf%*c", &* (* (a + d) + e));
        }
    }
    return a;
}
void o (double ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (a + c));
    }
    free (a);
}
