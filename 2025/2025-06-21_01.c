//Determinant calculator.
#include <stdio.h>
#include <stdlib.h>
double ** z (double, double);
double ** y (double **, double, double);
void v (double **, double, double);
void o (double **, double);
double ** w (double **, double, double, double, double);
double u (double **, double, double);
int main (int argc, char * * argv, char * * envp) {
    double ** a, b, c;
    scanf ("%lf %lf%*c", &b, &c);
    a = z (b, c);
    a = y (a, b, c);
    v (a, b, c);
    printf ("%lf\n", u (a, b, c));
    o (a, b);
    return EXIT_SUCCESS;
}
double u (double ** a, double b, double c) {
    if (b == 2 && c == 2) {
        return ((* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 1) + 0) * * (* (a + 0) + 1)));
    }
    int d;
    double f = 0.0, g = 0.0;
    for (d = 0; d < b; ++ d) {
        if ((d % 2) == 0) {
            f = 1.0;
        }
        else {
            f = -1.0;
        }
        g += f * * (* (a + 0) + d) * u (w (a, b, c, 0, d), (b - 1), (c - 1));
    }
    return g;
}
double ** w (double ** a, double b, double c, double d, double e) {
    int f, g;
    double ** h;
    h = z ((b - 1), (c - 1));
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
            if (f > d && g < e) {
                * (* (h + f - 1) + g) = * (* (a + f) + g);
            }
            if (f < d && g > e) {
                * (* (h + f) + g - 1) = * (* (a + f) + g);
            }
            if (f > d && g > e) {
                * (* (h + f - 1) + g - 1) = * (* (a + f) + g);
            }
        }
    }
    return h;
}
void o (double ** a, double b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (a + c));
    }
    free (a);
}
void v (double ** a, double b, double c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%lf ", * (* (a + d) + e));
        }
        printf ("\n");
    }
}
double ** z (double b, double c) {
    int d;
    double ** a;
    a = (double **) calloc (b, sizeof (double *));
    for (d = 0; d < b; ++ d) {
        * (a + d) = (double *) calloc (c, sizeof (double));
    }
    return a;
}
double ** y (double ** a, double b, double c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            scanf ("%lf%*c", &* (* (a + d) + e));
        }
    }
    return a;
}
