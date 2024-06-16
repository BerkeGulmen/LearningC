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

int main (int argc, char **argv, char **envp) {
    int a, b, c, d;
    printf ("Girceğiniz sayı kaçtır? ");
    scanf ("%d", &a);
    for (b = 0, d = 0; b < a; ++ b, ++ d) {
        for (c = 0; c < b; ++ c) {
            printf (" ");
        }
        printf ("*");
        for (c = d + 1; c < a; ++ c) {
            printf (" ");
        }
        for (c = d + 1; c < a; ++ c) {
            printf (" ");
        }
        printf ("*");
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
