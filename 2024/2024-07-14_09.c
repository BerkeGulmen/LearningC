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
    int a, b, c, d, e;
    scanf ("%d%*c", &a);
    for (b = 0, d = 0, e = a + 2; b < a; ++ b, ++ d, -- e) {
        if (b == (a - 1)) {
            break;
        }
        for (c = 0; c < (2 * a - 1); ++ c) {
            if (d == c) {
                printf ("*");
            }
            if (e == c) {
                printf ("*");
            }
            else {
                printf (" ");
            }
        }
        printf ("\n");
    }
    for (c = 0; c < (2 * a - 1); ++ c) {
        if (c == (a - 1)) {
            printf ("*");
        }
        else {
            printf (" ");
        }
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
