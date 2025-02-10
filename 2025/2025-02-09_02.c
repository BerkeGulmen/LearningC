/*
Kullanıcıdan alınan sayının, kaç basamaklı olduğunu ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b;
    scanf ("%d%*c", &a);
    for (b = 1; ; ++ b) {
        if (a < 10) {
            printf ("%d\n", b);
            break;
        }
        a /= 10;
    }
    return EXIT_SUCCESS;
}
