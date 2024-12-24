/*
 Kullanıcıdan alınan sayıya kadar Fibonacci sayılarını ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    for (b = 0, c = 1, d = 0; ;) {
        b = d;
        if (b <= a) {
            printf ("%d ", b);
        }
        if (b > a) {
            break;
        }
        d = c;
        c = b + d;
    }
    return EXIT_SUCCESS;
}
