/*
 
 Kullanıcıdan üçgen ve dik çubuk için sayı alınarak aşağıdaki deseni çiz.
 üçgen: 3, dik çubuk: 3 ise
   *
  ***
 *****
   *
   *
   *
 
 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e;
    printf ("Hangi sayı üçgen için? ");
    scanf ("%d", &a);
    printf ("Hangi sayı çubuk için? ");
    scanf ("%d", &e);
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
    for (b = 0; b < e; ++ b) {
        for (c = 0; c < (a - 1); ++ c) {
            printf (" ");
        }
        printf ("*");
        for (c = 0; c < (a - 1); ++ c) {
            printf (" ");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
