//Double pointer matrix row and column delete and merge rest with function
#include <stdio.h>
#include <stdlib.h>

int ** s (int, int);
void h (int **, int, int);
int ** voi_d (int **, int, int);
void r (int **, int, int);
void w (int **, int);
int main (int argc, char ** argv, char ** envp) {
    int a, b, ** k, ** u;
    printf ("Row count of matrix: ");
    scanf ("%d", &a);
    printf ("Column count of matrix: ");
    scanf ("%d", &b);
    k = s (a, b);
    h (k, a, b);
    u = voi_d (k, a, b);
    r (u, (a - 1), (b - 1));
    w (k, a);
    w (u, (a - 1));
    return EXIT_SUCCESS;
}
int ** s (int c, int b) {
    int ** a, g;
    a = (int **) calloc (c, sizeof (int *));
    for (g = 0; g < c; ++ g) {
        * (a + g) = (int *) calloc (b, sizeof (int));
    }
    return a;
}
void h (int ** x, int y, int z) {
    int a, b, c;
    for (a = 0; a < y; ++ a) {
        for (b = 0; b < z; ++ b) {
            printf ("%dth row %dth column: ", a, b);
            scanf ("%d", &c);
            * (* (x + a) + b) = c;
        }
    }
}
int ** voi_d (int ** o, int y, int z) {
    int ** x;
    x = s ((y -1), (z - 1));
    int a, b, c, d;
    printf ("row: ");
    scanf ("%d", &a);
    printf ("column: ");
    scanf ("%d", &b);
    for (c = 0; c < y; ++ c) {
        for (d = 0; d < z; ++ d) {
            if (c == a) {
                break;
            }
            if (d == b) {
                continue;
            }
            if (c < a && d < b) {
                * (* (x + c) + d) = * (* (o + c) + d);
            }
            if (c < a && d > b) {
                * (* (x + c) + d - 1) = * (* (o + c) + d);
            }
            if (c > a && d < b) {
                * (* (x + c - 1) + d) = * (* (o + c) + d);
            }
            if (c > a && d > b) {
                * (* (x + c - 1) + d - 1) = * (* (o + c) + d);
            }
        }
    }
    return x;
}
void r (int ** o, int c, int v) {
    int a, b;
    for (a = 0; a < c; ++ a) {
        for (b = 0; b < v; ++ b) {
            printf ("%d ", * (* (o + a) + b));
        }
        printf ("\n");
    }
}
void w (int ** c, int q) {
    int a;
    for (a = 0; a < q; ++ a) {
        free (* (c + a));
    }
    free (c);
}
