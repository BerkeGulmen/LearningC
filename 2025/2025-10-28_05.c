//1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105
//On this serial, which is the first value that have over 500 divisors?
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d = 2;
    for (a = 1; ; ++ d) {
        a += d;
        for (b = 1, c = 0; b <= a; ++ b) {
            if ((a % b) == 0) {
                ++ c;
            }
        }
        if (c == 30) {
            break;
        }
    }
    printf ("%d\n", a);
    return EXIT_SUCCESS;
}
