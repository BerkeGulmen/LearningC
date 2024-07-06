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
    int a, b, c, d;
    scanf ("%d%*c", &a);
    for (b = 0; b < a; ++ b) {
        for (c = a; c > 1 + b; -- c) {
            printf (" ");
        }
        for (d = 0; d < b; ++ d) {
            printf ("*");
        }
        printf ("*");
        for (d = 0; d < b; ++ d) {
            printf ("*");
        }
        for (c = a; c > 1 + b; -- c) {
            printf (" ");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
