/*
[10, 1000) aralığındaki sayılardan rakamları toplamı 15 olan ve 3'e tam bölünebilen kaç tane sayı vardır? (73)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    for (a = 10, b = 0; a < 1000; ++ a) {
        c = a;
        for (d = 0; ;) {
            d += (a % 10);
            if (a < 10) {
                break;
            }
            a /= 10;
        }
        if (d == 15) {
            ++ b;
        }
    }
    printf ("%d\n", b);
    return EXIT_SUCCESS;
}
