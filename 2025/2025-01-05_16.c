/*
 Kullanıcıdan sayı istenir. Girilen sayının pozitif bölenleri toplanıp ekrana yazdırılır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    for (b = 1, c = 0; b <= a; ++ b) {
        if ((a % b) == 0) {
            c += b;
        }
    }
    printf ("%d\n", c);
    return EXIT_SUCCESS;
}
