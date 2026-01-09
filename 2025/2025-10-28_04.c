//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17. Find the sum of all the primes below two million.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d = 0, e;
    for (a = 2, b = 0, e = 0; ; ++ a) {
        if (a == 2) {
            d = 0;
        }
        for (c = 2; c < a; ++ c) {
            if ((a % c) == 0) {
                d = 1;
                break;
            }
            else {
                d = 0;
            }
        }
        if (a >= 2000000) {
            break;
        }
        if (d == 0) {
            e += a;
        }
    }
    printf ("%d\n", e);
    return EXIT_SUCCESS;
}
