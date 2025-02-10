/*
AB iki basamaklı bir sayıdır. AB = 2 üzeri (A + B) eşitliğini sağlayan kaç tane sayı vardır? (32)
*/
#include <stdio.h>
#include <stdlib.h>
int x (int);
int main (int argc, char * * argv, char * * envp) {
    int a, b;
    for (a = 10, b = 0; a < 100; ++ a) {
        if (x (a) == a) {
            break;
        }
    }
    printf ("%d\n", a);
    return EXIT_SUCCESS;
}
int x (int a) {
    int b = 0, c, d;
    b = (a / 10) + (a % 10);
    for (c = 1, d = 2; c < b; ++ c) {
        d *= 2;
    }
    return d;
}
