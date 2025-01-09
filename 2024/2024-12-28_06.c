/*
AB iki basamaklı bir sayıdır. AB = 2 üzeri (A + B) eşitliğini sağlayan kaç tane sayı vardır? (32)
*/
#include <stdio.h>
#include <stdlib.h>
int f (int);

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    for (a = 10, b = 0, c = 0; a < 10000; ++ a) {
        b = f (a);
        if (b == a) {
            ++ c;
        }
    }
    printf ("%d\n", c);
    return EXIT_SUCCESS;
}
int f (int a) {
    int b, c;
    for (b = 0, c = 1; b < ((a / 10) + (a % 10)); ++ b) {
        c *= 2;
    }
    return c;
}
