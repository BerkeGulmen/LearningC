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

int main (int argc, char **argv, char **envp) {
    int a, b, c, d;
    printf ("Hangi sayı? ");
    scanf ("%d", &a);
    for (b = 0; b < a; ++ b) {
        for (c = 1 + b; c < a; ++ c) {
            printf (" ");
        }
        printf ("*");
        for (d = 0; d < b * 2; ++ d) {
            printf ("*");
        }
        for (c = 1 + b; c < a; ++ c) {
            printf (" ");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
