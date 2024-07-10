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
    int a, b, c, d, e, f;
    scanf ("%d%*c", &a);
    for (b = 0, c = (a + 1); b < a; ++ b, -- c) {
        if (b == (a - 1)) {
            break;
        }
        for (d = 0; d < (2 * a - 1); ++ d) {
            if (d == b) {
                printf ("*");
            }
            if (d == c) {
                printf ("*");
            }
            else {
                printf (" ");
            }
        }
    }
    return EXIT_SUCCESS;
}
