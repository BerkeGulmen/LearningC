/*
Bir pozitif tam sayının güç değeri, o sayının basamak çarpımı ile basamak toplamının toplamıdır. Bir sayı, kendi güç değerine tam bölünüyorsa, o sayıya güçlü sayı denir. 1'den N'e kadar olan guclu sayilari bul.
*/
#include <stdio.h>
#include <stdlib.h>

int x (int);
int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    printf ("This numbers are strong numbers:\n");
    for (b = 1, d = 0; b <= a; ++ b) {
        c = x (b);
        if ((b % c) == 0) {
            printf ("%d ", b);
            ++ d;
        }
    }
    printf ("There are %d strong numbers:\n", d);
    return EXIT_SUCCESS;
}
int x (int a) {
    int b = 1, c = 0, d = a;
    for (;;) {
        b *= a % 10;
        a /= 10;
        if (a == 0) {
            break;
        }
    }
    a = d;
    for (;;) {
        c += a % 10;
        a /= 10;
        if (a == 0) {
            break;
        }
    }
    b += c;
    return b;
}
