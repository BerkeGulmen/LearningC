//Determinant calculation.
#include <stdio.h>
#include <stdlib.h>

double ** z (int, int);
double ** y (double **, int, int);
double ** w (double **, int, int, int, int);
void v (double **, int, int);
double u (double **, int, int);
void q (double **, int);
int main (int argc, char * * argv, char * * envp) {
    int b, c;
    double ** a;
    scanf ("%d %d%*c", &b, &c);
    a = z (b, c);
    a = y (a, b, c);
    v (a, b, c);
    v (u (a, b, c), (b - 1), (c - 1));
    q (a, b);
    return EXIT_SUCCESS;
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
    double ** a;
    int d;
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
