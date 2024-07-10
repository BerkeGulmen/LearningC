/*
 Kullanıcıdan alınan sayı kadar satır olmak üzere aşağıdaki deseni çiz.
 3 için:
   *
  * *
 *   *
 *   *
  * *
   *
 4 için:
    *
   * *
  *   *
 *     *
 *     *
  *   *
   * *
    *
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e, f;
    scanf ("%d%*c", &a);
    for (b = 0; b < (a * 2 - 1); ++ b) {
        if (b == (a - 1)) {
            printf ("*");
        }
        else {
            printf (" ");
        }
    }
    printf ("\n");
    for (c = (a - 2), d = (a - 1), e = 0; e < (a - 1); ++ e, -- c, ++ d) {
        for (f = 0; f < (2 * a - 1); ++ f) {
            if (f == c) {
                printf ("*");
            }
            if (f == d) {
                printf ("*");
            }
            else {
                printf (" ");
            }
        }
        printf ("\n");
    }
    for (b = 0, c = (2 * a - 3), f = 0; f < (a - 1); ++ f, ++ b, -- c) {
        for (d = 0; d < (2 * a - 2); ++ d) {
            if (b == d) {
                printf ("*");
            }
            if (c == d) {
                printf ("*");
            }
            else {
                printf (" ");
            }
        }
        printf ("\n");
    }
    for (b = 0; b < (a - 1); ++ b) {
        printf (" ");
    }
    printf ("*");
    for (b = 0; b < (a - 1); ++ b) {
        printf (" ");
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
