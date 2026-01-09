//find the smallest positive number that is evenly divisible (no remainder) by all of the numbers from 1 to 20
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b;
    for (b = 1, a = 1; b <= 20; ++ b) {
        if ((a % b) != 0) {
            b = 1;
            ++ a;
        }
    }
    printf ("%d\n", a);
    return EXIT_SUCCESS;
}
