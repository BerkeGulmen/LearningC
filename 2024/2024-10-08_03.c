//İçi boş kare ama ortasında yıldız.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    if ((a % 2) == 0) {
        a += 1;
    }
    for (b = 0; b < a; ++ b) {
        printf ("* ");
        if (b == (a / 2)) {
            for (c = 0; c < (a + 1); ++ c) {
                if (c == (a / 2)) {
                    printf ("*");
                }
                else {
                    printf (" ");
                }
            }
            printf ("*");
            printf ("\n");
            continue;
        }
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
