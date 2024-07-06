/*
Ask the row and column numbers of matrix as "int int"
Get the all double values of matrix as a line as "double double double..."
Find the determinant of the matrix
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double * * x (int, int);
void z (double * *, int, int);
double * * w (double * *, int, int, int, int);
void y (double * *, int, int);
double u (double * *, int, int);
void q (double * *, int);
int main (int argc, char * * argv, char * * envp) {
    double * * c;
    int a, b;
    scanf ("%d %d%*c", &a, &b);
    c = x (a, b);
    z (c, a, b);
    y (c, a, b);
    printf ("Determinant: %lf\n", u (c, a, b));
    q (c, a);
    return EXIT_SUCCESS;
}

double * * x (int c, int d) {
    double * * a;
    int b;
    a = (double * *) calloc (c, sizeof (double *));
    for (b = 0; b < c; ++ b) {
         * (a + b) = (double *) calloc (d, sizeof (double));
    }
    return a;
}
void z (double * * a, int b, int c) {
    char * d;
    d = (char *) calloc (2147483647, sizeof (char));
    scanf ("%2147483646[^\n]%*c", d);
    char * h;
    h = strtok (d, " ");
    int g, e;
    for (g = 0; g < b; ++ g) {
        for (e = 0; e < c; ++ e) {
            * (* (a + g) + e) = (double) strtod (h, (char * *) NULL);
            h = strtok ((char *) NULL, " ");
        }
    }
    free (d);
    free (h);
}
double * * w (double * * a, int b, int c, int d, int e) {
    double * * f;
    int g, h;
    f = x ((b - 1), (c - 1));
    for (g = 0; g < b; ++ g) {
        for (h = 0; h < c; ++ h) {
            if (g == d) {
                break;
            }
            if (h == e) {
                continue;
            }
            if (g < d && h < e) {
                * (* (f + g) + h) = * (* (a + g) + h);
            }
            else if (g < d && h > e) {
                * (* (f + g) + h - 1) = * (* (a + g) + h);
            }
            else if (g > d && h < e) {
                * (* (f + g - 1) + h) = * (* (a + g) + h);
            }
            else if (g > d && h > e) {
                * (* (f + g - 1) + h - 1) = * (* (a + g) + h);
            }
        }
    }
    return f;
}
double u (double * * a, int b, int c) {
    double d = 0.0, f;
    int e;
    if ((b == 2) && (c == 2)) {
        d = (* (* (a + 0) + 0) * * (* (a + 1) + 1)) - (* (* (a + 1) + 0) * * (* (a + 0) + 1));
    }
    else {
        for (e = 0; e < b; ++ e) {
            if ((e + 0) % 2 != 0) {
                f = - 1.0;
            }
            else {
                f = 1.0;
            }
            d += f * * (* (a + 0) + e) * u (w (a, b, c, 0, e), (b - 1), (c - 1));
        }
    }
    return d;
}
void y (double * * a, int b, int c) {
    int d, e;
    for (d = 0; d < b; ++ d) {
        for (e = 0; e < c; ++ e) {
            printf ("%lf ", * (* (a + d) + e));
        }
        printf ("\n");
    }
    printf ("\n");
}
void q (double * * a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free (* (a + c));
    }
    free (a);
}
