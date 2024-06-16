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
    printf ("Inverse matrix is below:\n");
    y (r (c, a, b), a, b);
    q (c, a);
    return EXIT_SUCCESS;
}
double ** x (int a, int b) {
    double ** c;
    int d;
    c = (double **) calloc (a, sizeof (double *));
    for (d = 0; d < a; ++ d) {
        * (c + d) = (double *) calloc (b, sizeof (double));
    }
    return c;
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
    double ** h;
    int f, g;
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
    double d = 0.0;
    int e, f;
    if (b == 2 && c == 2) {
        d = (* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 1) + 0) * * (* (a + 0) + 1));
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
double ** v (double ** a, int b, int c) {
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
double ** t (double ** a, int b, int c) {
    int d, e;
    double ** f;
    f = x (b, c);
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            if ((d + e) % 2 == 0) {
                * (* (f + d) + e) = * (* (a + d) + e);
                continue;
            }
            else {
                * (* (f + d) + e) = * (* (a + d) + e) * (- 1);
            }
        }
    }
    return f;
}
double ** r (double ** a, int b, int c) {
    int e, o, g;
    double ** f, ** d;
    f = x (b, c);
    d = x (b, c);
    for (e = 0; e < b; ++ e) {
        for (o = 0; o < c; ++ o) {
            * (* (d + e) + o) = u (w (a, b, c, e, o), (b - 1), (c - 1));
        }
    }
    f = v (t (d, b, c), b, c);
    g = u (a, b, c);
    for (e = 0; e < b; ++ e) {
        for (o = 0; o < c; ++ o) {
            * (* (f + e) + o) = * (* (f + e) + o) / g;
        }
    }
    return f;
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
