/*
Kullanıcıdan sayı girmesi istenir. Girilen sayı, en fazla hangi sayıya kadar sayıların toplamından büyüktür? (Örneğin, 10 girilmiş
olsun. 1+2 de 10'dan küçüktür fakat daha büyük seri var: 1 + 2 + 3 = 6. Dolayısıyla ekrana 3 yazdırılır. 1 + 2 + 3 + 4 toplamı
10'dan küçük olmadığı için ekrana 4 yazılamaz.)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e, f;
    scanf ("%d%*c", &a);
    for (d = 3, e = 0; e < a; ++ e, ++ d) {
        for (b = 1, c = 2, f = 0; c < d; ++ c) {
            f += b + c;
        }
        if (f >= a) {
            printf ("%d\n", c - 2);
            break;
        }
    }
    return EXIT_SUCCESS;
}
