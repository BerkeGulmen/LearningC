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
    int a, b, c, d;
    scanf ("%d%*c", &a);
    for (b = 1, d = 1; b <= a; ++ b) {
        for (c = 0; c < (a - b); ++ c) {
            printf (" ");
        }
        if (b == 1) {
            printf ("*");
        }
        if (b != 1) {
            printf ("*");
            for (c = 0; c < d; ++ c) {
                printf (" ");
            }
            printf ("*");
        }
        for (c = 0; c < (a - b); ++ c) {
            printf (" ");
        }
        if (b != 1) {
            d += 2;
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
