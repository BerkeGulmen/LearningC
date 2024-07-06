#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * (* argv), char * (* envp)) {
    double a, b, c;
    scanf ("%lf %lf%*c", &a, &b);
    c = a / b;
    printf ("%lf\n", c);
    return EXIT_SUCCESS;
}
