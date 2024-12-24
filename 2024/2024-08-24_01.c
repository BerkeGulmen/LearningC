//Inverse calculation.
#include <stdio.h>
#include <stdlib.h>

double ** z (int, int);
double ** y (double **, int, int);
void v (double **, int, int);
double ** w (double **, int, int, int, int);
void q (double **, int);
double ** o (double **, int, int);
double ** t (double **, int, int);
double ** r (double **, int, int);
double u (double **, int, int);
int main (int argc, char * * argv, char * * envp) {
    double ** a;
    int b, c;
    scanf ("%d %d%*c", &b, &c);
    a = z (b, c);
    a = y (a, b, c);
    v (a, b, c);
    v (r (a, b, c), b, c);
    q (a, b);
    return EXIT_SUCCESS;
}
double ** r (double ** a, int b, int c) {
    int d, e;
    double f, ** g;
    g = z (b, c);
    f = u (a, b, c);
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            * (* (g + d) + e) = u (w (a, b, c, d, e), (b - 1), (c - 1));
        }
    }
    g = o (g, b, c);
    g = t (g, b, c);
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            * (* (g + d) + e) /= f;
        }
    }
    return g;
}
double u (double ** a, int b, int c) {
    if (b == 2 && c == 2) {
        return (* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 1) + 0) * * (* (a + 0) + 1));
    }
    double d = 0.0, f = 0.0;
    int e;
    for (e = 0, f = 0; e < c; ++ e) {
        if ((e % 2) == 0) {
            f = 1.0;
        }
        else {
            f = - 1.0;
        }
        d += f * * (* (a + 0) + e) * u (w (a, b, c, 0, e), (b - 1), (c - 1));
    }
    return d;
}
double ** t (double ** a, int b, int c) {
    int d, e;
    double ** f;
    f = z (c, b);
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            * (* (f + e) + d) = * (* (a + d) + e);
        }
    }
    return f;
}
double ** o (double ** a, int b, int c) {
    int d, e;
    double ** f, g;
    f = z (b, c);
    for (d = 0, g = 0.0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            if ((e % 2) == 0) {
                g = 1.0;
            }
            else {
                g = - 1.0;
            }
            * (* (f + d) + e) = * (* (a + d) + e) * g;
        }
    }
    return f;
}
double ** z (int a, int b) {
    double ** c;
    int d;
    c = (double **) calloc (a, sizeof (double *));
    for (d = 0; d < a; ++ d) {
        * (c + d) = (double *) calloc (b, sizeof (double));
    }
    return c;
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
void v (double ** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%lf ", * (* (a + d) + e));
        }
        printf ("\n");
    }
}
void q (double ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (a + c));
    }
    free (a);
}
double ** w (double ** a, int b, int c, int d, int e) {
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
