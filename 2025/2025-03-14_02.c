/*
Inverse Matrix.
*/
#include <stdio.h>
#include <stdlib.h>
double ** z (int, int);
double ** y (double **, int, int);
void v (double **, int, int);
double ** t (double **, int, int);
double u (double **, int, int);
double ** w (double **, int, int, int, int);
void o (double **, int);
int main (int argc, char * * argv, char * * envp) {
    double ** a;
    int b, c;
    scanf ("%d %d%*c", &b, &c);
    a = z (b, c);
    a = y (a, b, c);
    v (a, b, c);
    
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
double ** t (double ** a, int b, int c) {
    double ** d;
    d = z (c, b);
    int e, f;
    for (f = 0; f < c; ++ f) {
        for (e = 0; e < b; ++ e) {
            * (* (d + f) + e) = * (* (a + e) + f);
        }
    }
    return d;
}
double u (double ** a, int b, int c) {
    if () {
        return
    }
}
