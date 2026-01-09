/*
1'den N'e kadar olan sayılar arasındaki Asal Sayıların toplamını bulan program.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int x (int);
int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    for (b = 2, c = 0; b <= a; ++ b) {
        d = x (b);
        if (d == 1) {
            c += b;
        }
    }
    printf ("%d\n", c);
    return EXIT_SUCCESS;
}
int x (int a) {
    int b;
    if (a == 2) {
        return 1;
    }
    for (b = 2; b <= sqrt (a); ++ b) {
        if ((a % b) == 0) {
            return 0;
        }
    }
    return 1;
}
