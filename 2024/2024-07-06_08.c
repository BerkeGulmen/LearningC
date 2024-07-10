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
        for (c = a - 1; c > b; -- c) {
            printf (" ");
        }
        for (c = 0; c < b; ++ c) {
            printf ("*");
        }
        printf ("*");
        for (c = 0; c < b; ++ c) {
            printf ("*");
        }
        for (c = a - 1; c > b; -- c) {
            printf (" ");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
