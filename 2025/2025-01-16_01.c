/*
Kullanıcıdan kaç tane sayı gireceğine dair girdi alınır. Belirtilen sayı kadar sayı kullanıcıdan alınır. Kaç tane tek ve kaç tane
çift sayı girildiği en sonda ekrana yazdırılır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e;
    scanf ("%d%*c", &a);
    for (b = 0, d = 0, e = 0; b < a; ++ b) {
        scanf ("%d%*c", &c);
        if ((c % 2) == 0) {
            d += 1;
        }
        else {
            e += 1;
        }
    }
    printf ("Even numbers : %d\n", d);
    printf ("Odd numbers: %d\n", e);
    return EXIT_SUCCESS;
}
