//sayinin basamaklari toplami ile basamak carpiminin esit oldugu kac sayi.
#include <stdio.h>
#include <stdlib.h>
int x (int);
int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    for (b = 1, c = 0; b <= a; ++ b) {
        d = x (b);
        if (d == 1) {
            c += 1;
        }
    }
    printf ("%d\n", c);
    return EXIT_SUCCESS;
}
int x (int a) {
    int b, c;
    for (b = 0, c = 1; ;) {
        b += a % 10;
        c *= a % 10;
        a /= 10;
        if (a == 0) {
            break;
        }
    }
    if (b == c) {
        return 1;
    }
    return 0;
}
