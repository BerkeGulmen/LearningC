/*
Kullanıcıdan alınan sayı kadar satır olmak üzere aşağıdaki deseni çiz.
3 için:
  *
 ***
*****
4 için:
   *
  ***
 *****
*******
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    for (b = 0; b < a; ++ b) {
        for (c = a - b - 1; c > 0; -- c) {
            printf (" ");
        }
        for (c = b; c > 0; -- c) {
            printf ("*");
        }
        printf ("*");
        for (c = b; c > 0; -- c) {
            printf ("*");
        }
        for (c = a - b - 1; c > 0; -- c) {
            printf (" ");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
