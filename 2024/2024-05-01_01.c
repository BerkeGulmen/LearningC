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

int main (int argc, char ** argv, char ** envp) {
    int a, b, c, f, g, h;
    printf ("Sayı kaç? ");
    scanf ("%d", &a);
    b = a - 1;
    for (h = 0, f = b, g = b; h < a; ++ h) {
        for (c = 0; c < (a * 2 - 1); ++ c) {
            if (c == f || c == g) {
                printf ("*");
            }
            else {
                printf (" ");
            }
        }
        f -= 1;
        g += 1;
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
