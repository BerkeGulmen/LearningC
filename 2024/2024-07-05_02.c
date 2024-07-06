/*
 Ekrana kullanıcının girdiği sayıya kadar
 1
 22
 333
 4444
 55555
 666666
 7777777
 88888888...
 şeklindeki seriyi ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    for (b = 1; b <= a; ++ b) {
        for (c = 0; c < b; ++ c) {
            printf ("%d", b);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
