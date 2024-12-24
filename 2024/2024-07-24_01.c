//determinant calculation.
#include <stdio.h>
#include <stdlib.h>
double ** z (int, int);
void y (double **, int);
void v (double **, int, int);
double ** q (double **, int, int);
double u (double **, int, int);
double ** w (double **, int, int, int, int);

int main (int argc, char * * argv, char * * envp) {
    double ** a;
    int b, c;
    scanf ("%d %d%*c", &b, &c);
    a = z (b, c);
    a = q (a, b, c);
    v (a, b, c);
    printf ("%lf\n", u (a, b, c));
    y (a, b);
    return EXIT_SUCCESS;
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
void y (double ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (a + c));
    }
    free (a);
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
double ** q (double ** a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            scanf ("%lf%*c", &* (* (a + d) + e));
        }
    }
    return a;
}
double u (double ** a, int b, int c) {
    int d;
    double e, f;
    if (b == 2 && c == 2) {
        return (* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 0) + 1) * * (* (a + 1) + 0));
    }
    for (d = 0, e = 0, f = 0; d < c; ++ d, ++ e) {
        if (((int) e % 2) == 0) {
            e = 1;
        }
        else {
            e = - 1;
        }
        f += e * * (* (a + 0) + d) * u (w (a, b, c, 0, d), (b - 1), (c - 1));
    }
    return f;
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
