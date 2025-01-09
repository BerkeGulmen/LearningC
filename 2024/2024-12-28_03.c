/*
4 basamaklı ABCD şeklinde A + B = C + D eşitliğini sağlayan kaç tane sayı vardır. (615)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d = 0;
    for (a = 1000, b = 0, c = 0; a < 10000; ++ a) {
        b = (a / 1000) + ((a / 100) % 10);
        c = ((a % 100) / 10) + (a % 10);
        if (b == c) {
            d += 1;
        }
        b = 0;
        c = 0;
    }
    printf ("%d\n", d);
    return EXIT_SUCCESS;
}
