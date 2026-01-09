/*
kendi rakamları toplamına tam bölünebilen kaç tane sayı olduğunu bul.
*/
#include <stdio.h>
#include <stdlib.h>

int x (int);
int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    for (b = 1, c = 0; b <= a; ++ b) {
        d = x (b);
        if (b % d == 0) {
            c += 1;
        }
    }
    printf ("%d\n", c);
    return EXIT_SUCCESS;
}
int x (int a) {
    int b;
    for (b = 0; ;) {
        b += a % 10;
        a /= 10;
        if (a == 0) {
            break;
        }
    }
    return b;
}
