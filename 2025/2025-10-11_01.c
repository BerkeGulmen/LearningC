//Fibonacci çift terimler toplamı.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e;
    for (a = 1, b = 2, e = 0, c = 0; ;) {
        if (a % 2 == 0) {
            e += a;
        }
        if (b % 2 == 0) {
            e += b;
        }
        if (c % 2 == 0) {
            e += c;
        }
        d = c;
        c = a + b;
        if (c > 4000000) {
            c = d;
            break;
        }
        a = b + c;
        b = a + c;
    }
    printf ("%d\n", e);
    return EXIT_SUCCESS;
}
