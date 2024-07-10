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
    for (b = 0, d = 1, e = 0; b < a; ++ b, ++ d) {
        for (c = a - 1; c > b; -- c) {
            printf (" ");
        }
        for (c = 0, e = b + d; c < e; ++ c) {
            printf ("*");
        }
        for (c = a - 1; c > b; -- c) {
            printf (" ");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
