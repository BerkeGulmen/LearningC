/*
Kullanıcıdan alınan sayı kadar satır olmak üzere aşağıdaki deseni çiz.
3 için:
  *
 * *
*   *
4 için:
   *
  * *
 *   *
*     *
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e, f;
    scanf ("%d%*c", &a);
    for (b = 0; b < (2 * a - 1); ++ b) {
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
    printf ("\n");
    return EXIT_SUCCESS;
}
