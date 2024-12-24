//İçi boş kare.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    for (b = 0; b < a; ++ b) {
        printf ("* ");
        if (b != 0 && b != (a - 1)) {
            for (c = 0; c < (a + 1); ++ c) {
                printf (" ");
            }
        }
        if (b == 0) {
            for (c = 0; c < (a - 2); ++ c) {
                printf ("* ");
            }
        }
        if (b == (a - 1)) {
            for (c = 0; c < (a - 2); ++ c) {
                printf ("* ");
            }
        }
        printf ("*");
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
