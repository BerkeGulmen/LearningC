/*
Kullanıcıdan alınan sayının, rakamlarını tek tek ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a;
    scanf ("%d%*c", &a);
    for (; ; ) {
        printf ("%d ", (a % 10));
        a /= 10;
        if (a < 10) {
            break;
        }
    }
    printf ("%d\n", (a % 10));
    return EXIT_SUCCESS;
}
