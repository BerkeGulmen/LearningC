/*
Kullanıcıdan kaç tane sayı gireceği sorulur. Kullanıcının girdiği sayılar içinde en büyük ile en küçük arasındaki fark ekrana
yazdırılır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e;
    scanf ("%d%*c", &a);
    for (b = 0, c = 0, e = 0, d = 0; d < a; ++ d) {
        scanf ("%d%*c", &e);
        if (b == 0 && c == 0) {
            b = e;
            c = e;
        }
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
