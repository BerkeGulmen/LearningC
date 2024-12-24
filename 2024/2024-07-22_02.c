/*
Kullanıcıdan kaç tane sayı gireceği sorulur. Kullanıcının girdiği sayılar içinde en büyük ile en küçük arasındaki fark ekrana
yazdırılır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e;
    scanf ("%d%*c", &a);
    for (b = 0, d = 0, c = 0, e = 0; b < a; ++ b) {
        scanf ("%d%*c", &c);
        if (d == 0 && e == 0) {
            d = c;
            e = c;
        }
        if (d < c) {
            d = c;
        }
        if (e > c) {
            e = c;
        }
    }
    printf ("%d\n", d - e);
    return EXIT_SUCCESS;
}
