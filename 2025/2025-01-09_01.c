/*
 Kullanıcıdan alınan sayıya kadar Fibonacci sayılarını ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    for (b = 1, c = 1, d = 0; b <= a;) {
        d = b;
        printf ("%d ", b);
        b += c;
        c = d;
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
