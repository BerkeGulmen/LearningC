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

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d %d%*c", &a, &d);
    for (b = 0; b < a; ++ b) {
        for (c = 0; c < (a - b - 1); ++ c) {
            printf (" ");
        }
        for (c = 0; c < b; ++ c) {
            printf ("*");
        }
        printf ("*");
        for (c = 0; c < b; ++ c) {
            printf ("*");
        }
        for (c = 0; c < (a - b - 1); ++ c) {
            printf (" ");
        }
        printf ("\n");
    }
    for (b = 0; b < d; ++ b) {
        for (c = 0; c < (d - 1); ++ c) {
            printf (" ");
        }
        printf ("*");
        for (c = 0; c < (d - 1); ++ c) {
            printf (" ");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
