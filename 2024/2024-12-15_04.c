/*
 Kullanıcının belirteceği sayıya kadar çarpım tablosu oluşturup ekrana yazan program.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    for (b = 1; b <= a; ++ b) {
        for (c = 1; c <= 10; ++ c) {
            printf ("%d * %d = %d\t", b, c, b * c);
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
