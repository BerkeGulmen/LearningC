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
        for (c = a - b - 1; c > 0; -- c) {
            printf (" ");
        }
        for (c = 0; c < b; ++ c) {
            printf ("*");
        }
        printf ("*");
        for (c = 0; c < b; ++ c) {
            printf ("*");
        }
        for (c = a - b - 1; c > 0; -- c) {
            printf (" ");
        }
        printf ("\n");
    }
    for (b = 0; b < d; ++ b) {
        for (c = 0; c < (2 * a - 1); ++ c) {
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
