#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b;
    double c, d, e;
    scanf ("%d %d%*c", &a, &b);
    d = (double) b * 6;
    c = (double) a * 30;
    c += (double) b * 0.5;
    e = c - d;
    if (e < 0) {
        e *= - 1;
    }
    else if (e > 180) {
        e -= 180;
    }
    printf ("%lf\n", e);
    return EXIT_SUCCESS;
}
