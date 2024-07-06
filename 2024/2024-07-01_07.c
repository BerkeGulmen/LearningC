#include <stdio.h>
#include <stdlib.h>

double x (int);
int main (int argc, char * (* argv), char * (* envp)) {
    int a, b;
    double c;
    scanf ("%d %d%*c", &a, &b);
    c = ((x (a)) / (x (b))) / (x (a - b));
    printf ("%lf\n", c);
    return EXIT_SUCCESS;
}
double x (int a) {
    double c;
    int b;
    for (b = 1, c = 1; b <= a; ++ b) {
        c *= (double) b;
    }
    return c;
}
