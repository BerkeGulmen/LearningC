/*
Kullanıcıdan sayı girmesi istenir. Girilen sayı, en fazla hangi sayıya kadar sayıların toplamından büyüktür? (Örneğin, 10 girilmiş olsun. 1+2 de 10'dan küçüktür fakat daha büyük seri var: 1 + 2 + 3 = 6. Dolayısıyla ekrana 3 yazdırılır. 1 + 2 + 3 + 4 toplamı 10'dan küçük olmadığı için ekrana 4 yazılmaz.)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    for (c = 0, b = 1; c < a; ++ b) {
        c += b;
    }
    printf ("En büyüğünün sonucu: %d\n", b - 2);
    return EXIT_SUCCESS;
}
