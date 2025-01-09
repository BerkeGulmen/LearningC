/*
Kullanıcıdan alınan sayıya kadar sayılara bakıp kaç tane 5 rakamı kullanıldığını bulup ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e;
    scanf ("%d%*c", &a);
    for (b = 0, c = 0, d = 0; b <= a; ++ b) {
        d = b;
        for (e = 0; ; ++ e) {
            if ((b % 10) == 5) {
                ++ c;
            }
            if (b < 10) {
                break;
            }
            b /= 10;
        }
        b = d;
    }
    printf ("%d\n", c);
    return EXIT_SUCCESS;
}
