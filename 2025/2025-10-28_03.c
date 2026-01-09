//Find the 10001st prime number.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d = 0, e;
    for (a = 2, b = 0, e = 0; ; ++ a) {
        if (a == 2) {
            d = 0;
            continue;
        }
        for (c = 2; c < (a / 2); ++ c) {
            if ((a % c) == 0) {
                d = 1;
                break;
            }
            else {
                d = 0;
            }
        }
        if (d == 0) {
            ++ e;
            b = a;
        }
        if (e == 10001) {
            break;
        }
    }
    printf ("%d\n", b);
    return EXIT_SUCCESS;
}
