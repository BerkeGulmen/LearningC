/*
Kullanıcıdan alınan sayıya kadar sayılara bakıp kaç tane 5 rakamı kullanıldığını bulup ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    for (b = 0, c = 0; b <= a; ++ b) {
        for (d = b; ;) {
            if (d % 10 == 5) {
                c += 1;
            }
            d /= 10;
            if (d == 0) {
                break;
            }
        }
    }
    printf ("%d\n", c);
    return EXIT_SUCCESS;
}
