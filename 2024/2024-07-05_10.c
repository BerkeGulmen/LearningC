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
    int a, b, c, d, f;
    scanf ("%d%*c", &a);
    for (b = 0, c = (a * 2 - 3), f = 0; f < a - 1; ++ f, ++ b, -- c) {
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
    for (b = 0; b < a - 1; ++ b) {
        printf (" ");
    }
    printf ("*");
    for (b = 0; b < a - 1; ++ b) {
        printf (" ");
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
