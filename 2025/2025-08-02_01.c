#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, c, d, e = 0, g = 0;
    double f = 0.0;
    int * b;
    printf ("Kaç sayi gireceksiniz?\n");
    scanf ("%d%*c", &a);
    b = (int *) calloc (a, sizeof(int));
    for (c = 0; c < a; ++ c) {
        scanf ("%d%*c", &d);
        if (g < d) {
            g = d;
        }
        if (d % 2 == 0) {
            ++ e;
            f += d;
        }
        * (b + c) = d;
    }
    f = f / e;
    if (e == 0) {
        printf ("Çift sayi bulunamadi.\n");
    }
    else {
        printf ("%lf\n", f);
    }
    printf ("%d\n", g);
    return EXIT_SUCCESS;
}
