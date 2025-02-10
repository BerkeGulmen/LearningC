/*
Kullanıcı saat ve dakika bilgilerini girsin. Analog saatte o saat anı için akrep ve yelkovan arasında oluşan dar açıyı bulup
ekrana yazdır.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b;
    double c, d, e;
    scanf ("%d %d%*c", &a, &b);
    d = (double) b * 6.0;
    c = (double) a * 30.0;
    c += (double) b * 0.5;
    e = c - d;
    if (e < 0.0) {
        e *= - 1.0;
    }
    if (e > 180.0) {
        e -= 180.0;
    }
    printf ("%lf\n", e);
    return EXIT_SUCCESS;
}
