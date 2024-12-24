#include <stdio.h>
#include <stdlib.h>
int *z (int);
void y (int *);
int v (int *, int);
int *q (int *, int);
void w (int *, int);

int main (int argc, char * * argv, char * * envp) {
    int a = 5, *b, c = 3, d;
    //scanf ("%d%*c", &a);
    b = z (a);
    * (b + 0) = 5;
    * (b + 1) = 6;
    * (b + 2) = 1;
    * (b + 3) = 9;
    * (b + 4) = 3;
    //printf ("%d\n", * (b + v (b, a)));
    for (d = 0; d < c; ++ d) {
        b = q (b, v (b, a));
    }
    //printf ("%d\n", * (b + v (b, a)));
    w (b, a);
    y (b);
    return EXIT_SUCCESS;
}
int *z (int a) {
    int *b;
    b = (int *) calloc (a, sizeof (int));
    return b;
}
void y (int *a) {
    free (a);
}
int v (int *a, int b) {
    int c, d;
    for (c = 0, d = 0; c < b; ++ c) {
        if (* (a + d) > * (a + c)) {
            d = c;
        }
    }
    return d;
}
int *q (int *a, int b) {
    * (a + b) += 1;
    return a;
}
void w (int * a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        printf ("%d ", * (a + c));
    }
}
