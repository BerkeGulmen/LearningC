/*
Kullanıcıdan alınan sayıya kadar Fibonacci sayılarını ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &c);
    for (a = 1, b = 2, d = 0; a < c;) {
        printf ("%d ", a);
        d = b;
        b = b + a;
        a = d;
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
