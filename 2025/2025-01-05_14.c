/*
Kullanıcıdan kaç tane sayı gireceği sorulur. Kullanıcının girdiği sayılar içinde en büyük ile en küçük arasındaki fark ekrana
yazdırılır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e;
    scanf ("%d%*c", &a);
    scanf ("%d%*c", &b);
    c = b;
    for (d = 1; d < a; ++ d) {
        scanf ("%d%*c", &e);
        if (b > e) {
            b = e;
        }
        if (c < e) {
            c = e;
        }
    }
    printf ("%d\n", c - b);
    return EXIT_SUCCESS;
}
