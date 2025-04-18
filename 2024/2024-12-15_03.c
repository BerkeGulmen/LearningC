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
    int a, b, c, d, e;
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
    for (b = 0, c = 3, d = 0; b < a; ++ b) {
        for (e = 0; e < b; ++ e) {
            printf (" ");
        }
        printf ("*");
        for (e = 0, d = ((a - c) + a); e < d; ++ e) {
            printf (" ");
        }
        if (b != (a - 1)) {
            printf ("*");
        }
        for (e = 0; e < b; ++ e) {
            printf (" ");
        }
        if (b != (a - 1)) {
            c += 2;
        }
        if (b == (a - 1)) {
            c += 1;
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
