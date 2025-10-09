/*
Determinant hesaplama.
*/
#include <stdio.h>
#include <stdlib.h>

double ** z (int, int);
double ** v (double **, int, int);
void t (double **, int, int);
void o (double **, int);
double ** w (double **, int, int, int, int);
double u (double **, int, int);

int main (int argc, char * * argv, char * * envp) {
    int b, c;
    double ** a;
    scanf ("%d %d*c", &b, &c);
    a = z (b, c);
    a = v (a, b, c);
    t (a, b, c);
    printf ("%lf\n", u (a, b, c));
    o (a, b);
    return EXIT_SUCCESS;
}
double ** z (int a, int b) {
    double ** c;
    int d;
    c = (double **) calloc (a, sizeof (double *));
    for (d = 0; d < b; ++ d) {
        * (c + d) = (double *) calloc (b, sizeof (double));
    }
    return c;
}
double ** v (double ** a, int b, int c) {
    int d, e, f;
    for (d = 0; d < b; ++ d) {
        for (e = 0, f = 0; e < c; ++ e) {
            scanf ("%d%*c", &f);
            * (* (a + d) + e) = f;
        }
    }
    return a;
}
void t (double ** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%lf ", * (* (a + d) + e));
        }
        printf ("\n");
    }
}
void o (double ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (a + c));
    }
    free (a);
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
double u (double ** a, int b, int c) {
    if (b == 2 && c == 2) {
        return ((* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 1) + 0) * * (* (a + 0) + 1)));
    }
    int d;
    double e, f;
    for (d = 0, e = 1.0, f = 0.0; d < c; ++ d) {
        f += e * * (* (a + 0) + d) * u (w (a, b, c, 0, d), b - 1, c - 1);
        e *= - 1.0;
    }
    return f;
}
