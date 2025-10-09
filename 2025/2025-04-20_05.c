//Avarage of Weight and Height.
#include <stdio.h>
#include <stdlib.h>
struct z {
    int * a;
    int * b;
};

int main (int argc, char * * argv, char * * envp) {
    struct z a;
    int b, c, g, f;
    double d, e;
    scanf ("%d%*c", &b);
    a.a = (int *) calloc (b, sizeof (int));
    a.b = (int *) calloc (b, sizeof (int));
    for (c = 0; c < b; ++ c) {
        scanf ("%d%*c", (a.a + c));
        scanf ("%d%*c", (a.b + c));
    }
    for (c = 0, d = 0, e = 0, g = 0, f = 0; c < b; ++ c) {
        d += * (a.a + c);
        e += * (a.b + c);
    }
    d = d / (double) b;
    e = e / (double) b;
    printf ("Weight: %lf\n Height: %lf\n", d, e);
    return EXIT_SUCCESS;
}
