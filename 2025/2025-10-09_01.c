/*
 1000’den küçük olup 3 veya 5’in katı olan tüm doğal sayıların toplamını bulun.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b;
    for (a = 1, b = 0; a < 1000; ++ a) {
        if ((a % 3) == 0 || (a % 5) == 0) {
            b += a;
        }
    }
    printf ("%d\n", b);
    return EXIT_SUCCESS;
}
