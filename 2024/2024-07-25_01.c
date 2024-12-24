//determinant calculation.
#include <stdio.h>
#include <stdlib.h>
double ** z (int, int);
void y (double **, int);
void v (double **, int, int);
double ** q (double **, int, int);
double ** w (double **, int, int, int, int);

int main (int argc, char * * argv, char * * envp) {
    double ** a;
    int b, c;
    scanf ("%d %d%*c", &b, &c);
    a = z (b, c);
    a = q (a, b, c);
    v (a, b, c);
    y (a, b);
    return EXIT_SUCCESS;
}
double ** z (int a, int b) {
    int c;
    double ** d;
    d = (double **) calloc (a, sizeof (double *));
    for (c = 0; c < a; ++ c) {
        * (d + c) = (double *) calloc (b, sizeof (double));
    }
    return d;
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
double ** w (double ** a, int b, int c, int d, int e) {
    double ** h;
    h = z ((b - 1), (c - 1));
    int f, g;
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
        }
    }
    return h;
}
