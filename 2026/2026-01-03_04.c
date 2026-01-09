//en buyuk sayi.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, * b, c, d;
    scanf ("%d%*c", &a);
    b = (int *) calloc (a, sizeof (int));
    for (c = 0; c < a; ++ c) {
        scanf ("%d%*c", &* (b + c));
        if (c == 0) {
            d = * (b + c);
        }
        if (d < * (b + c)) {
            d = * (b + c);
        }
    }
    printf ("%d\n", d);
    return EXIT_SUCCESS;
}
