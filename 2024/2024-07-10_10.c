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
    int a, b, c, d, e;
    scanf ("%d%*c", &a);
    for (b = 0, d = 1; b < a; ++ b, ++ d) {
        for (c = a - b - 1; c > 0; -- c) {
            printf (" ");
        }
        for (e = b + d; e > 0; -- e) {
            printf ("*");
        }
        for (c = a - b - 1; c > 0; -- c) {
            printf (" ");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
