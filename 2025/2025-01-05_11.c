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
    for (b = 0, d = 0; b < a; ++ b) {
        for (c = 0; c < (a - b - 1); ++ c) {
            printf (" ");
        }
        if (b == 0) {
            printf ("*");
        }
        if (b != 0) {
            printf ("*");
            for (c = 0; c < (b + 1 + d); ++ c) {
                printf (" ");
            }
            printf ("*");
        }
        for (c = 0; c < (a - 1 - b); ++ c) {
            printf (" ");
        }
        printf ("\n");
        if (b != 0) {
            d += 1;
        }
    }
    return EXIT_SUCCESS;
}
