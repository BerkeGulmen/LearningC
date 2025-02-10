/*
 Kullanıcıdan alınan sayı kadar satır olmak üzere aşağıdaki deseni çiz.
 3 için:
 *   *
  * *
   *
 4 için:
 *     *
  *   *
   * *
    *

*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    for (b = 0, d = 0; b < a; ++ b, d += 2) {
        for (c = 0; c < b; ++ c) {
            printf (" ");
        }
        printf ("*");
        for (c = 0; c < (a - d + 1); ++ c) {
            printf (" ");
        }
        if (b != (a - 1)) {
            printf ("*");
        }
        for (c = 0; c < b; ++ c) {
            printf (" ");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
