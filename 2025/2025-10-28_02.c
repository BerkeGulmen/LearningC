//What is the largest prime of 600851475143?
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c = 0, d, e = 0;
    d = 775146;
    for (a = 2; a < d; ++ a) {
        if (a == 2) {
            c = 0;
            continue;
        }
        if (a != 2) {
            for (b = 2; b < a; ++ b) {
                if ((a % b) == 0) {
                    c = 1;
                    break;
                }
                else {
                    c = 0;
                }
            }
        }
        if (c == 0 && (d % a) == 0) {
            e = a;
        }
    }
    printf ("%d\n", e);
    return EXIT_SUCCESS;
}
