/*
 Kullanıcının gireceği sayı kadar ortada tek sıra yıldız olsun. Üst ve alt kısımlar azalarak devam etsin. (kullanıcı 4 girmişse:)
 *
 **
 ***
 ****
 ***
 **
 *
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    for (b = 1; b <= a; ++ b) {
        if (b == a) {
            break;
        }
        for (c = 0; c < b; ++ c) {
            printf ("*");
        }
        printf ("\n");
    }
    for (b = 0; b < a; ++ b) {
        for (c = a; c > b; -- c) {
            printf ("*");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
