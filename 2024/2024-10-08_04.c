//İçi boş dikdörtgen.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    d = a * 2;
    for (b = 0; b < a; ++ b) {
        printf ("* ");
        if (b != 0 && b != (a - 1)) {
            for (c = 0; c < d; ++ c) {
                printf ("  ");
            }
        }
        if (b == 0) {
            for (c = 0; c < d; ++ c) {
                printf ("* ");
            }
        }
        if (b == (a - 1)) {
            for (c = 0; c < d; ++ c) {
                printf ("* ");
            }
        }
        printf ("*");
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
