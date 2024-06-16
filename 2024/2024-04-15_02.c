//Inverse Matrix Double Pointer.
#include <stdio.h>
#include <stdlib.h>

double ** x (int, int);
void z (double **, int, int);
double ** w (double **, int, int, int, int);
void y (double **, int, int);
double u (double **, int, int);
double ** v (double **, int, int);
double ** t (double **, int, int);
double ** r (double **, int, int);
void q (double **, int);
int main (int argc, char ** argv, char ** envp) {
    int a, b;
    double ** c;
    printf ("Row: ");
    scanf ("%d", &a);
    printf ("Column: ");
    scanf ("%d", &b);
    c = x (a, b);
    z (c, a, b);
    y (c, a, b);
    y (r (c, a, b), a, b);
    q (c, a);
    return EXIT_SUCCESS;
}
double ** x (int a, int b) {
    int c;
    double ** d;
    d = (double **) calloc (a, sizeof (double *));
    for (c = 0; c < a; ++ c) {
        * (d + c) = (double *) calloc (b, sizeof (double));
    }
    return d;
}
void z (double ** a, int b, int c) {
    int d, e;
    double f;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%dth row %dth column: ", d, e);
            scanf ("%lf", &f);
            * (* (a + d) + e) = f;
        }
    }
}
double ** w (double ** a, int b, int c, int d, int e) {
    int f, g;
    double ** h;
    h = x ((b - 1), (c - 1));
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
double u (double ** a, int b, int c) {
    int e;
    double f, d = 0.0;
    if (b == 2 && c == 2) {
        d = (* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 0) + 1) * * (* (a + 1) + 0));
    }
    else {
        for (e = 0; e < b; ++ e) {
            if ((e + 0) % 2 == 0) {
                f = 1.0;
            }
            else {
                f = - 1.0;
            }
            d += f * * (* (a + 0) + e) * u (w (a, b, c, 0, e), (b - 1), (c - 1));
        }
    }
    return d;
}
double ** v (double ** a, int b, int c) {
    int d, e;
    double ** f;
    f = x (b, c);
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            if ((d + e) % 2 == 0) {
                * (* (f + d) + e) = * (* (a + d) + e);
            }
            else {
                * (* (f + d) + e) = * (* (a + d) + e) * (- 1);
            }
        }
    }
    return f;
}
double ** t (double ** a, int b, int c) {
    int d, e;
    double ** f;
    f = x (c, b);
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            * (* (f + e) + d) = * (* (a + d) + e);
        }
    }
    return f;
}
double ** r (double ** a, int b, int c) {
    int d, e;
    double ** f, ** g, h;
    f = x (b, c);
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            * (* (f + d) + e) = u (w (a, b, c, d, e), (b - 1), (c - 1));
        }
    }
    g = t (v (f, b, c), b, c);
    q (f, b);
    h = u (a, b, c);
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            * (* (g + d) + e) = * (* (g + d) + e) / h;
        }
    }
    return g;
}
void y (double ** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%lf ", * (* (a + d) + e));
        }
        printf ("\n");
    }
    printf ("\n");
}
void q (double ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (a + c));
    }
    free (a);
}
