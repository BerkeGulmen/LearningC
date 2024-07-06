/*
 Ekrana kullanıcının girdiği sayıya kadar
 1
 12
 123
 1234
 12345
 123456
 1234567
 12345678...
 şeklindeki seriyi ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    for (b = 1; b <= a; ++ b) {
        for (c = 0, d = 1; c < b; ++ c, ++ d) {
            printf ("%d", d);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
