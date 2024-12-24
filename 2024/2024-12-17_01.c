/*
 Kullanıcıdan alınan sayı, hangi iki sayının karelerinin toplamına eşittir? (40 için 2-6 ve 6-2)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    for (b = 1; b <= a; ++ b) {
        for (c = 1; c < a; ++ c) {
            if (((b * b) + (c * c)) == a) {
                printf ("%d %d\n", b, c);
                break;
            }
        }
        if (((b * b) + (c * c)) == a) {
            break;
        }
    }
    return EXIT_SUCCESS;
}
