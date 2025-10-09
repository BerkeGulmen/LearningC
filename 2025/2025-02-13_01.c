/*
Determinant calculation.
*/
#include <stdio.h>
#include <stdlib.h>
double ** z (int, int);
double ** y (double **, int, int);

int main (int argc, char * * argv, char * * envp) {
    int b, c;
    double ** a;
    scanf ("%d %d%*c", &b, &c);
    a = z (b, c);
    return EXIT_SUCCESS;
}
double ** z (int b, int c) {
    int d;
    double ** a;
    a = (double **) calloc (b, sizeof (double *));
    for (d = 0; d < b; ++ d) {
        * (a + d) = (double *) calloc (c, sizeof (double));
    }
    return a;
}
double ** y (double ** a, int b, int c) {
    
}
