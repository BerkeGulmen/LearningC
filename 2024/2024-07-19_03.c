/*
Kullanıcıdan alınan sayıya kadar aşağıdaki toplamı uygulayıp sonucu yazdır.
(1) + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4) + ... + (1 + 2 + 3 + ... + N)
(2 için sonuç 4, 10 için sonuç 220, 50 için sonuç 22100)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    for (b = 1, d = 0; b <= a; ++ b) {
        for (c = 1; c <= b; ++ c) {
            d += c;
        }
    }
    printf ("%d\n", d);
    return EXIT_SUCCESS;
}
