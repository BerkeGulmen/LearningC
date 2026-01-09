//armstrong sayilari.
#include <stdio.h>
#include <stdlib.h>

int x (int);
int y (int, int);
int main (int argc, char * * argv, char * * envp) {
    int a, * b, c, d, e;
    scanf ("%d%*c", &a);
    b = (int *) calloc (a, sizeof (int));
    for (c = 0, e = 0; c < a; ++ c) {
        scanf ("%d%*c", &*(b + c));
    }
    for (c = 0, e = 0; c < a; ++ c) {
        d = * (b + c);
        e = x (d);
        if (e == 1) {
            printf ("%d ", * (b + c));
            e = 0;
        }
    }
    free (b);
    printf ("\n");
    return EXIT_SUCCESS;
}
int x (int a) {
    int b, c = a, d = 0, e;
    for (e = 0;;) {
        e += 1;
        a /= 10;
        if (a == 0) {
            break;
        }
    }
    a = c;
    for (; ;) {
        b = a % 10;
        d += y (e, b);
        a /= 10;
        if (a == 0) {
            break;
        }
    }
    if (d == c) {
        return 1;
    }
    return 0;
}
int y (int a, int d) {
    int b, c;
    for (c = 0, b = 1; c < a; ++ c) {
        b *= d;
    }
    return b;
}
