/*
Kullanıcıdan alınan sayıya kadar asal sayıların birler basamağı üç olanların listesini ve birler basamağı yedi olanların toplamını
ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e;
    scanf ("%d%*c", &a);
    for (c = 3, d = 0, e = 0; c <= a; ++ c) {
        for (b = 2, d = 0; b < c; ++ b) {
            if ((c % b) == 0) {
                d = 1;
                break;
            }
        }
        if (d == 0) {
            if ((c % 10) == 3) {
                printf ("%d ", c);
            }
            if ((c % 10) == 7) {
                e += c;
            }
        }
    }
    printf ("\n%d\n", e);
    return EXIT_SUCCESS;
}
