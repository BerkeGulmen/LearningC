/*
Kullanıcıdan alınan sayıya kadar aşağıdaki hesabı yapıp sonucu yazdır.
[((a) üzeri 1) / (1 faktöriyel)] + [((a) üzeri 2) / (2 faktöriyel)] + [((a) üzeri 3) / (3 faktöriyel)] + [((a) üzeri 4) / (4
faktöriyel)] + ... + [((a) üzeri a) / (a faktöriyel)]
(5 için sonuç yaklaşık 142, 10 için sonuç yaklaşık 10085)
*/
#include <stdio.h>
#include <stdlib.h>
int z (int, int);
int x (int);
int main (int argc, char * * argv, char * * envp) {
    int a, b, d, e;
    double c;
    scanf ("%d%*c", &a);
    for (b = 1, c = 0, d = 0, e = 0; b <= a; ++ b) {
        d = z (a, b);
        e = x (b);
        c += ((double) d / (double) e);
    }
    printf ("%lf\n", c);
    return EXIT_SUCCESS;
}
int z (int a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        a *= a;
    }
    return a;
}
int x (int a) {
    int b, c;
    for (b = 1, c = 1; b <= a; ++ b) {
        c *= b;
    }
    return c;
}
