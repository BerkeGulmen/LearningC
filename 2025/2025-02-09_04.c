/*
Kullanıcıdan alınan sayının, rakamlarının toplamını ekran yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b;
    scanf ("%d%*c", &a);
    for (b = 0; ; ) {
        b += (a % 10);
        a /= 10;
        if (a < 10) {
            break;
        }
    }
    b += (a % 10);
    printf ("%d\n", b);
    return EXIT_SUCCESS;
}
