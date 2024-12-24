#include <stdio.h>
#include <stdlib.h>
int * z (int);
void y (int *);
void v (int *, int);
int q (int *, int);
int * w (int *, int);

int main (int argc, char * * argv, char * * envp) {
    int a = 5, * b, c = 3, d;
    b = z (a);
    * (b + 0) = 5;
    * (b + 1) = 6;
    * (b + 2) = 1;
    * (b + 3) = 9;
    * (b + 4) = 3;
    v (b, a);
    for (d = 0; d < c; ++ d) {
        b = w (b, q (b, a));
    }
    v (b, a);
    return EXIT_SUCCESS;
}
int * z (int a) {
    int * b;
    b = (int *) calloc (a, sizeof (int));
    return b;
}
void y (int * a) {
    free (a);
}
void v (int * a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        printf ("%d ", * (a + c));
    }
    printf ("\n");
}
int q (int * a, int b) {
    int c, d;
    for (c = 0, d = 0; c < b; ++ c) {
        if (* (a + c) < * (a + d)) {
            d = c;
        }
    }
    return d;
}
int * w (int * a, int b) {
    * (a + b) += 1;
    return a;
}
