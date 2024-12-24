/*
Kullanıcıdan alınan sayıya kadar asal sayıların birler basamağı üç olanların listesini ve birler basamağı yedi olanların toplamını
ekrana yazdır
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e;
    scanf ("%d%*c", &a);
    for (b = 3, e = 0; b <= a; ++ b) {
        for (c = 2, d = 0; c < b; ++ c) {
            if ((b % c) == 0) {
                d = 1;
            }
        }
        if (d == 0) {
            if ((b % 10) == 3) {
                printf ("%d ", b);
            }
            if ((b % 10) == 7) {
                e += b;
            }
        }
    }
    printf ("\n");
    printf ("%d\n", e);
    return EXIT_SUCCESS;
}
