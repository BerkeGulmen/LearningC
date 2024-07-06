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
    int a, b, c, d, e;
    scanf ("%d %d%*c", &a, &e);
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
    for (b = 0; b < e; ++ b) {
        for (c = 0; c < (e * 2 - 1); ++ c) {
            if (c == (e - 1)) {
                printf ("*");
            }
            if (c != e) {
                printf (" ");
            }
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
