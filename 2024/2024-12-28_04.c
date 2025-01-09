/*
[10, 1000) aralığındaki sayılardan rakamları toplamı 15 olan ve 3'e tam bölünebilen kaç tane sayı vardır? (73)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    for (a = 10, b = 0, c = 0; a < 1000; ++ a) {
        if (a < 100) {
            b += ((a % 100) / 10) + (a % 10);
        }
        if (a >= 100) {
            b += ((a / 100) % 10) + ((a % 100) / 10) + (a % 10);
        }
        if (b == 15) {
            ++ c;
        }
        b = 0;
    }
    printf ("%d\n", c);
    return EXIT_SUCCESS;
}
