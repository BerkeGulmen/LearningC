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
    int a, b, c, d, e, f;
    scanf ("%d %d%*c", &a, &f);
    for (b = 0, d = 1; b < a; ++ b, ++ d) {
        for (c = a - 1; c > b; -- c) {
            printf (" ");
        }
        for (e = b + d, c = 0; c < e; ++ c) {
            printf ("*");
        }
        for (c = a - 1; c > b; -- c) {
            printf (" ");
        }
        printf ("\n");
    }
    for (b = 0; b < a; ++ b) {
        for (c = 0; c < (a * 2 - 1); ++ c) {
            if (c == (a - 1)) {
                printf ("*");
            }
            else {
                printf (" ");
            }
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
