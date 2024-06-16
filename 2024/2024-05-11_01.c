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

int main (int argc, char ** argv, char ** envp) {
    int a, b, c, d;
    printf ("Sayıyı gir: ");
    scanf ("%d", &a);
    for (b = 0; b < a; ++ b) {
        for (c = 0; c < (a * 2 - 2); ++ c) {
            if (c == b || ) {
                printf ("*");
            }
            printf (" ");
            
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
